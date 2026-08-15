#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioLog.hpp"
#include "GlobalNamespace/zzzz__AudioLog_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioLog._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioLog::*)(::StringW, float_t, int32_t, ::GlobalNamespace::AudioAsset*, ::UnityEngine::Object*, bool, ::UnityEngine::Color)>(&::GlobalNamespace::AudioLog::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18047ca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLog>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AudioAsset*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AudioLog::_ctor(::StringW  text, float_t  dspTime, int32_t  frameCount, ::GlobalNamespace::AudioAsset*  asset, ::UnityEngine::Object*  obj, bool  stackTrace, ::UnityEngine::Color  background)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLog>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AudioAsset*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text, dspTime, frameCount, asset, obj, stackTrace, background);
}
// Ctor Parameters [CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "DSPTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FrameCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Asset", ty: "::UnityW<::GlobalNamespace::AudioAsset>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Obj", ty: "::UnityW<::UnityEngine::Object>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ObjName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "StackTrace", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioLog::AudioLog(::StringW  Message, float_t  DSPTime, int32_t  FrameCount, ::UnityW<::GlobalNamespace::AudioAsset>  Asset, ::UnityW<::UnityEngine::Object>  Obj, ::StringW  ObjName, ::StringW  StackTrace) noexcept  {
this->Message = Message;
this->DSPTime = DSPTime;
this->FrameCount = FrameCount;
this->Asset = Asset;
this->Obj = Obj;
this->ObjName = ObjName;
this->StackTrace = StackTrace;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioLog::AudioLog()   {
}
