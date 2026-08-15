#pragma once
// IWYU pragma private; include "UnityEngine/AnimatorOverrideController.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_impl.hpp"
#include "UnityEngine/zzzz__AnimatorOverrideController_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimatorOverrideController_def.hpp"
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::*)()>(&::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>(),
                    {::i2c::class_of<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback* UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::AnimatorOverrideController_OnOverrideControllerDirtyCallback()   {
}
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController.OnInvalidateOverrideController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AnimatorOverrideController*)>(&::UnityEngine::AnimatorOverrideController::OnInvalidateOverrideController)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182233ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(),
                        {"OnInvalidateOverrideController", {}, {::i2c::type_of<::UnityEngine::AnimatorOverrideController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*& UnityEngine::AnimatorOverrideController::__cordl_internal_get_OnOverrideControllerDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOverrideControllerDirty;
}
constexpr ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback* const& UnityEngine::AnimatorOverrideController::__cordl_internal_get_OnOverrideControllerDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOverrideControllerDirty;
}
constexpr void UnityEngine::AnimatorOverrideController::__cordl_internal_set_OnOverrideControllerDirty(::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnOverrideControllerDirty = value;
}
inline void UnityEngine::AnimatorOverrideController::OnInvalidateOverrideController(::UnityEngine::AnimatorOverrideController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorOverrideController*>(),
                        {"OnInvalidateOverrideController", {}, {::i2c::type_of<::UnityEngine::AnimatorOverrideController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, controller);
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimatorOverrideController::AnimatorOverrideController()   {
}
