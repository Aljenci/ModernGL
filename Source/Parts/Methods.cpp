#include "Methods.hpp"

#include "Events/LoadEvent.hpp"
#include "Events/VersionChangeEvent.hpp"

int num_methods = 0;
ModuleMethod moduleMethods[1024];
PyMethodDef methods[1024];

bool RegisterMethod(const ModuleMethod & method) {
	moduleMethods[num_methods++] = method;
	return true;
}

namespace {
	void OnVersionChange(GLVER version) {
		for (int i = 0; i < num_methods; ++i) {
			methods[i].ml_meth = moduleMethods[i].meth[version];
		}
	}

	void OnLoad() {
		for (int i = 0; i < num_methods; ++i) {
			methods[i].ml_name = (char *)moduleMethods[i].name;
			methods[i].ml_meth = moduleMethods[i].meth[OPENGL_UNK];
			methods[i].ml_flags = moduleMethods[i].flags;
			methods[i].ml_doc = (char *)moduleMethods[i].doc;
		}

		methods[num_methods].ml_name = 0;
		methods[num_methods].ml_meth = 0;
		methods[num_methods].ml_flags = 0;
		methods[num_methods].ml_doc = 0;
	}

	bool registered[] = {
		RegisterLoadEventHandler(OnLoad),
		RegisterVersionChangeEventHandler(OnVersionChange),
	};
}
