#pragma once
// IWYU pragma private; include "UnityEngine/CustomRenderTextureManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__CustomRenderTextureManager_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__CustomRenderTexture_def.hpp"
//  Writing Method size for method: ::UnityEngine::CustomRenderTextureManager.InvokeOnTextureLoaded_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::CustomRenderTexture*)>(&::UnityEngine::CustomRenderTextureManager::InvokeOnTextureLoaded_Internal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182243770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTextureManager*>(),
                        {"InvokeOnTextureLoaded_Internal", {}, {::i2c::type_of<::UnityEngine::CustomRenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTextureManager.InvokeOnTextureUnloaded_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::CustomRenderTexture*)>(&::UnityEngine::CustomRenderTextureManager::InvokeOnTextureUnloaded_Internal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822437a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTextureManager*>(),
                        {"InvokeOnTextureUnloaded_Internal", {}, {::i2c::type_of<::UnityEngine::CustomRenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTextureManager.InvokeTriggerUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::CustomRenderTexture*, int32_t)>(&::UnityEngine::CustomRenderTextureManager::InvokeTriggerUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182243800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTextureManager*>(),
                        {"InvokeTriggerUpdate", {}, {::i2c::type_of<::UnityEngine::CustomRenderTexture*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTextureManager.InvokeTriggerInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::CustomRenderTexture*)>(&::UnityEngine::CustomRenderTextureManager::InvokeTriggerInitialize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822437d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTextureManager*>(),
                        {"InvokeTriggerInitialize", {}, {::i2c::type_of<::UnityEngine::CustomRenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::CustomRenderTextureManager::setStaticF_textureLoaded(::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*, "textureLoaded", ::UnityEngine::CustomRenderTextureManager*>(std::forward<::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>* UnityEngine::CustomRenderTextureManager::getStaticF_textureLoaded()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*, "textureLoaded", ::UnityEngine::CustomRenderTextureManager*>();
}
inline void UnityEngine::CustomRenderTextureManager::setStaticF_textureUnloaded(::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*, "textureUnloaded", ::UnityEngine::CustomRenderTextureManager*>(std::forward<::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>* UnityEngine::CustomRenderTextureManager::getStaticF_textureUnloaded()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*, "textureUnloaded", ::UnityEngine::CustomRenderTextureManager*>();
}
inline void UnityEngine::CustomRenderTextureManager::setStaticF_updateTriggered(::System::Action_2<::UnityW<::UnityEngine::CustomRenderTexture>,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::UnityEngine::CustomRenderTexture>,int32_t>*, "updateTriggered", ::UnityEngine::CustomRenderTextureManager*>(std::forward<::System::Action_2<::UnityW<::UnityEngine::CustomRenderTexture>,int32_t>*>(value));
}
inline ::System::Action_2<::UnityW<::UnityEngine::CustomRenderTexture>,int32_t>* UnityEngine::CustomRenderTextureManager::getStaticF_updateTriggered()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::UnityEngine::CustomRenderTexture>,int32_t>*, "updateTriggered", ::UnityEngine::CustomRenderTextureManager*>();
}
inline void UnityEngine::CustomRenderTextureManager::setStaticF_initializeTriggered(::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*, "initializeTriggered", ::UnityEngine::CustomRenderTextureManager*>(std::forward<::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>* UnityEngine::CustomRenderTextureManager::getStaticF_initializeTriggered()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::CustomRenderTexture>>*, "initializeTriggered", ::UnityEngine::CustomRenderTextureManager*>();
}
inline void UnityEngine::CustomRenderTextureManager::InvokeOnTextureLoaded_Internal(::UnityEngine::CustomRenderTexture*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTextureManager*>(),
                        {"InvokeOnTextureLoaded_Internal", {}, {::i2c::type_of<::UnityEngine::CustomRenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline void UnityEngine::CustomRenderTextureManager::InvokeOnTextureUnloaded_Internal(::UnityEngine::CustomRenderTexture*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTextureManager*>(),
                        {"InvokeOnTextureUnloaded_Internal", {}, {::i2c::type_of<::UnityEngine::CustomRenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline void UnityEngine::CustomRenderTextureManager::InvokeTriggerUpdate(::UnityEngine::CustomRenderTexture*  crt, int32_t  updateCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTextureManager*>(),
                        {"InvokeTriggerUpdate", {}, {::i2c::type_of<::UnityEngine::CustomRenderTexture*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, crt, updateCount);
}
inline void UnityEngine::CustomRenderTextureManager::InvokeTriggerInitialize(::UnityEngine::CustomRenderTexture*  crt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTextureManager*>(),
                        {"InvokeTriggerInitialize", {}, {::i2c::type_of<::UnityEngine::CustomRenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, crt);
}
// Ctor Parameters []
constexpr ::UnityEngine::CustomRenderTextureManager::CustomRenderTextureManager()   {
}
