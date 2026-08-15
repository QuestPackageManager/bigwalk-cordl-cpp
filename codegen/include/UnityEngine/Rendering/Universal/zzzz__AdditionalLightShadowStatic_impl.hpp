#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/AdditionalLightShadowStatic.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AdditionalLightShadowStatic_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic.IsStaticLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic::IsStaticLight)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1820bcc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic*>(),
                        {"IsStaticLight", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic::*)()>(&::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic::OnEnable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1820bcd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic::*)()>(&::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic::OnDisable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1820bcc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic::*)()>(&::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Light>& UnityEngine::Rendering::Universal::AdditionalLightShadowStatic::__cordl_internal_get_m_Light()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Light;
}
constexpr ::UnityW<::UnityEngine::Light> const& UnityEngine::Rendering::Universal::AdditionalLightShadowStatic::__cordl_internal_get_m_Light() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Light;
}
constexpr void UnityEngine::Rendering::Universal::AdditionalLightShadowStatic::__cordl_internal_set_m_Light(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Light = value;
}
inline void UnityEngine::Rendering::Universal::AdditionalLightShadowStatic::setStaticF_s_StaticLightInstanceIDs(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "s_StaticLightInstanceIDs", ::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic*>(std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* UnityEngine::Rendering::Universal::AdditionalLightShadowStatic::getStaticF_s_StaticLightInstanceIDs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "s_StaticLightInstanceIDs", ::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic*>();
}
inline bool UnityEngine::Rendering::Universal::AdditionalLightShadowStatic::IsStaticLight(int32_t  lightInstanceID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic*>(),
                        {"IsStaticLight", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lightInstanceID);
}
inline void UnityEngine::Rendering::Universal::AdditionalLightShadowStatic::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::AdditionalLightShadowStatic::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::AdditionalLightShadowStatic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic* UnityEngine::Rendering::Universal::AdditionalLightShadowStatic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic::AdditionalLightShadowStatic()   {
}
