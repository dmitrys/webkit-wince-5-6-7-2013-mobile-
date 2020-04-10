/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "WebKitDOMTestCallback.h"

#include "CSSImportRule.h"
#include "DOMObjectCache.h"
#include "ExceptionCode.h"
#include "JSMainThreadExecState.h"
#include "WebKitDOMBinding.h"
#include "WebKitDOMClass1Private.h"
#include "WebKitDOMClass2Private.h"
#include "WebKitDOMClass3Private.h"
#include "WebKitDOMClass8Private.h"
#include "WebKitDOMDOMStringListPrivate.h"
#include "WebKitDOMTestCallbackPrivate.h"
#include "WebKitDOMThisClassPrivate.h"
#include "gobject/ConvertToUTF8String.h"
#include <wtf/GetPtr.h>
#include <wtf/RefPtr.h>

#define WEBKIT_DOM_TEST_CALLBACK_GET_PRIVATE(obj) G_TYPE_INSTANCE_GET_PRIVATE(obj, WEBKIT_TYPE_DOM_TEST_CALLBACK, WebKitDOMTestCallbackPrivate)

typedef struct _WebKitDOMTestCallbackPrivate {
#if ENABLE(SQL_DATABASE)
    RefPtr<WebCore::TestCallback> coreObject;
#endif // ENABLE(SQL_DATABASE)
} WebKitDOMTestCallbackPrivate;

#if ENABLE(SQL_DATABASE)

namespace WebKit {

WebKitDOMTestCallback* kit(WebCore::TestCallback* obj)
{
    if (!obj)
        return 0;

    if (gpointer ret = DOMObjectCache::get(obj))
        return WEBKIT_DOM_TEST_CALLBACK(ret);

    return wrapTestCallback(obj);
}

WebCore::TestCallback* core(WebKitDOMTestCallback* request)
{
    return request ? static_cast<WebCore::TestCallback*>(WEBKIT_DOM_OBJECT(request)->coreObject) : 0;
}

WebKitDOMTestCallback* wrapTestCallback(WebCore::TestCallback* coreObject)
{
    ASSERT(coreObject);
    return WEBKIT_DOM_TEST_CALLBACK(g_object_new(WEBKIT_TYPE_DOM_TEST_CALLBACK, "core-object", coreObject, NULL));
}

} // namespace WebKit

#endif // ENABLE(SQL_DATABASE)

G_DEFINE_TYPE(WebKitDOMTestCallback, webkit_dom_test_callback, WEBKIT_TYPE_DOM_OBJECT)

static void webkit_dom_test_callback_finalize(GObject* object)
{
    WebKitDOMTestCallbackPrivate* priv = WEBKIT_DOM_TEST_CALLBACK_GET_PRIVATE(object);
#if ENABLE(SQL_DATABASE)
    WebKit::DOMObjectCache::forget(priv->coreObject.get());
#endif // ENABLE(SQL_DATABASE)
    priv->~WebKitDOMTestCallbackPrivate();
    G_OBJECT_CLASS(webkit_dom_test_callback_parent_class)->finalize(object);
}

static GObject* webkit_dom_test_callback_constructor(GType type, guint constructPropertiesCount, GObjectConstructParam* constructProperties)
{
    GObject* object = G_OBJECT_CLASS(webkit_dom_test_callback_parent_class)->constructor(type, constructPropertiesCount, constructProperties);
#if ENABLE(SQL_DATABASE)
    WebKitDOMTestCallbackPrivate* priv = WEBKIT_DOM_TEST_CALLBACK_GET_PRIVATE(object);
    priv->coreObject = static_cast<WebCore::TestCallback*>(WEBKIT_DOM_OBJECT(object)->coreObject);
    WebKit::DOMObjectCache::put(priv->coreObject.get(), object);
#endif // ENABLE(SQL_DATABASE)
    return object;
}

static void webkit_dom_test_callback_class_init(WebKitDOMTestCallbackClass* requestClass)
{
    GObjectClass* gobjectClass = G_OBJECT_CLASS(requestClass);
    g_type_class_add_private(gobjectClass, sizeof(WebKitDOMTestCallbackPrivate));
    gobjectClass->constructor = webkit_dom_test_callback_constructor;
    gobjectClass->finalize = webkit_dom_test_callback_finalize;
}

static void webkit_dom_test_callback_init(WebKitDOMTestCallback* request)
{
    WebKitDOMTestCallbackPrivate* priv = WEBKIT_DOM_TEST_CALLBACK_GET_PRIVATE(request);
    new (priv) WebKitDOMTestCallbackPrivate();
}

gboolean
webkit_dom_test_callback_callback_with_no_param(WebKitDOMTestCallback* self)
{
#if ENABLE(SQL_DATABASE)
    WebCore::JSMainThreadNullState state;
    g_return_val_if_fail(WEBKIT_DOM_IS_TEST_CALLBACK(self), FALSE);
    WebCore::TestCallback* item = WebKit::core(self);
    gboolean result = item->callbackWithNoParam();
    return result;
#else
    WEBKIT_WARN_FEATURE_NOT_PRESENT("SQL Database")
    return static_cast<gboolean>(0);
#endif /* ENABLE(SQL_DATABASE) */
}

gboolean
webkit_dom_test_callback_callback_with_class1param(WebKitDOMTestCallback* self, WebKitDOMClass1* class1Param)
{
#if ENABLE(SQL_DATABASE)
    WebCore::JSMainThreadNullState state;
    g_return_val_if_fail(WEBKIT_DOM_IS_TEST_CALLBACK(self), FALSE);
    g_return_val_if_fail(WEBKIT_DOM_IS_CLASS1(class1Param), FALSE);
    WebCore::TestCallback* item = WebKit::core(self);
    WebCore::Class1* convertedClass1Param = WebKit::core(class1Param);
    gboolean result = item->callbackWithClass1Param(convertedClass1Param);
    return result;
#else
    WEBKIT_WARN_FEATURE_NOT_PRESENT("SQL Database")
    return static_cast<gboolean>(0);
#endif /* ENABLE(SQL_DATABASE) */
}

gboolean
webkit_dom_test_callback_callback_with_class2param(WebKitDOMTestCallback* self, WebKitDOMClass2* class2Param, const gchar* strArg)
{
#if ENABLE(SQL_DATABASE)
    WebCore::JSMainThreadNullState state;
    g_return_val_if_fail(WEBKIT_DOM_IS_TEST_CALLBACK(self), FALSE);
    g_return_val_if_fail(WEBKIT_DOM_IS_CLASS2(class2Param), FALSE);
    g_return_val_if_fail(strArg, FALSE);
    WebCore::TestCallback* item = WebKit::core(self);
    WebCore::Class2* convertedClass2Param = WebKit::core(class2Param);
    WTF::String convertedStrArg = WTF::String::fromUTF8(strArg);
    gboolean result = item->callbackWithClass2Param(convertedClass2Param, convertedStrArg);
    return result;
#else
    WEBKIT_WARN_FEATURE_NOT_PRESENT("SQL Database")
    return static_cast<gboolean>(0);
#endif /* ENABLE(SQL_DATABASE) */
}

glong
webkit_dom_test_callback_callback_with_non_bool_return_type(WebKitDOMTestCallback* self, WebKitDOMClass3* class3Param)
{
#if ENABLE(SQL_DATABASE)
    WebCore::JSMainThreadNullState state;
    g_return_val_if_fail(WEBKIT_DOM_IS_TEST_CALLBACK(self), 0);
    g_return_val_if_fail(WEBKIT_DOM_IS_CLASS3(class3Param), 0);
    WebCore::TestCallback* item = WebKit::core(self);
    WebCore::Class3* convertedClass3Param = WebKit::core(class3Param);
    glong result = item->callbackWithNonBoolReturnType(convertedClass3Param);
    return result;
#else
    WEBKIT_WARN_FEATURE_NOT_PRESENT("SQL Database")
    return static_cast<glong>(0);
#endif /* ENABLE(SQL_DATABASE) */
}

gboolean
webkit_dom_test_callback_callback_with_string_list(WebKitDOMTestCallback* self, WebKitDOMDOMStringList* listParam)
{
#if ENABLE(SQL_DATABASE)
    WebCore::JSMainThreadNullState state;
    g_return_val_if_fail(WEBKIT_DOM_IS_TEST_CALLBACK(self), FALSE);
    g_return_val_if_fail(WEBKIT_DOM_IS_DOM_STRING_LIST(listParam), FALSE);
    WebCore::TestCallback* item = WebKit::core(self);
    WebCore::DOMStringList* convertedListParam = WebKit::core(listParam);
    gboolean result = item->callbackWithStringList(convertedListParam);
    return result;
#else
    WEBKIT_WARN_FEATURE_NOT_PRESENT("SQL Database")
    return static_cast<gboolean>(0);
#endif /* ENABLE(SQL_DATABASE) */
}

gboolean
webkit_dom_test_callback_callback_with_boolean(WebKitDOMTestCallback* self, gboolean boolParam)
{
#if ENABLE(SQL_DATABASE)
    WebCore::JSMainThreadNullState state;
    g_return_val_if_fail(WEBKIT_DOM_IS_TEST_CALLBACK(self), FALSE);
    WebCore::TestCallback* item = WebKit::core(self);
    gboolean result = item->callbackWithBoolean(boolParam);
    return result;
#else
    WEBKIT_WARN_FEATURE_NOT_PRESENT("SQL Database")
    return static_cast<gboolean>(0);
#endif /* ENABLE(SQL_DATABASE) */
}

gboolean
webkit_dom_test_callback_callback_requires_this_to_pass(WebKitDOMTestCallback* self, WebKitDOMClass8* class8Param, WebKitDOMThisClass* thisClassParam)
{
#if ENABLE(SQL_DATABASE)
    WebCore::JSMainThreadNullState state;
    g_return_val_if_fail(WEBKIT_DOM_IS_TEST_CALLBACK(self), FALSE);
    g_return_val_if_fail(WEBKIT_DOM_IS_CLASS8(class8Param), FALSE);
    g_return_val_if_fail(WEBKIT_DOM_IS_THIS_CLASS(thisClassParam), FALSE);
    WebCore::TestCallback* item = WebKit::core(self);
    WebCore::Class8* convertedClass8Param = WebKit::core(class8Param);
    WebCore::ThisClass* convertedThisClassParam = WebKit::core(thisClassParam);
    gboolean result = item->callbackRequiresThisToPass(convertedClass8Param, convertedThisClassParam);
    return result;
#else
    WEBKIT_WARN_FEATURE_NOT_PRESENT("SQL Database")
    return static_cast<gboolean>(0);
#endif /* ENABLE(SQL_DATABASE) */
}

