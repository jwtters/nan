/*********************************************************************
 * NAN - Native Abstractions for Node.js
 *
 * Copyright (c) 2015 NAN contributors
 *
 * MIT License <https://github.com/nodejs/nan/blob/master/LICENSE.md>
 ********************************************************************/

#include <nan.h>

using namespace Nan;  // NOLINT(build/namespaces)

NAN_METHOD(ReturnNull) {
  info.GetReturnValue().SetNull();
}

void Init (v8::Handle<v8::Object> target) {
  Set(target
    , New<v8::String>("r").ToLocalChecked()
    , New<v8::FunctionTemplate>(ReturnNull)->GetFunction()
  );
}

NODE_MODULE(returnnull, Init)

