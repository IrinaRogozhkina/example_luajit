#include <stdio.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

int main()
{
	lua_State *vm_state = luaL_newstate();

	luaL_openlibs(vm_state);

	/* hoho */
	luaL_loadfile(vm_state, "ex.lua");

	int r = lua_pcall(vm_state, 0, 0, 0);
	printf("retval: %d\n", r);
	if (r != 0)
	{
		return;
	}

	lua_getglobal(vm_state, "variable1");
	printf("value: %s\n", lua_tostring(vm_state, -1));

	printf("Done\n");
}

