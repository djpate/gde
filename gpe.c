#include <stdio.h>
#include <string.h>

#include "geanyplugin.h"
#include "document.h"


GeanyPlugin         *geany_plugin;
GeanyData           *geany_data;
GeanyFunctions      *geany_functions;

PLUGIN_VERSION_CHECK(147)

PLUGIN_SET_INFO("GPE", "Display PHP errors","1.0", "Christophe Verbinnen djpate.com");

/* returns extension of given filename */
char *getExt (char *fspec) {
    char *e = strrchr (fspec, '.');
    if (e == NULL)
        e = "";
    return e;
}

void checkErrors(char *s){
    /* this should check if it's a php extension then run the check */
    system("ls");
}

static void OndocumentActivate(GObject *obj, GeanyDocument *doc, gpointer user_data){
     checkErrors(DOC_FILENAME(doc));
}

PluginCallback plugin_callbacks[] =
    {
        { "document-activate", (GCallback) &OndocumentActivate, FALSE, NULL },
        { NULL, NULL, FALSE, NULL }
    };

void plugin_init(GeanyData *data)
{
}

void plugin_cleanup(void)
{
}


