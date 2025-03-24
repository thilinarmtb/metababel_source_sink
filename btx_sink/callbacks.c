#include <metababel/metababel.h>
#include <stdio.h>

void btx_thapi_start_callbacks(
    void *btx_handle,
    void *usr_data,
    const char* name,
    int vpid, int vtid, uint64_t num_entries, uint64_t platforms, uint64_t num_platform) {

   printf("Received btx_thapi_start_callbacks message\n");
}

void btx_register_usr_callbacks(void *btx_handle) {
  btx_register_callbacks_thapi_start(btx_handle, &btx_thapi_start_callbacks);
}

