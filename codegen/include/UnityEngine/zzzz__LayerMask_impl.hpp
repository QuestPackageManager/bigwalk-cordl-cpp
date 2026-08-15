#pragma once
// IWYU pragma private; include "UnityEngine/LayerMask.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::LayerMask.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::LayerMask)>(&::UnityEngine::LayerMask::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LayerMask>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LayerMask.op_Implicit___UnityEngine__LayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (*)(int32_t)>(&::UnityEngine::LayerMask::op_Implicit___UnityEngine__LayerMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LayerMask>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LayerMask.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::LayerMask::*)()>(&::UnityEngine::LayerMask::get_value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LayerMask>(),
                        {"get_value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LayerMask.NameToLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::LayerMask::NameToLayer)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182272bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LayerMask>(),
                        {"NameToLayer", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LayerMask.NameToLayer_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::LayerMask::NameToLayer_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182272bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LayerMask>(),
                        {"NameToLayer_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::LayerMask::op_Implicit_int32_t(::UnityEngine::LayerMask  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LayerMask>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, mask);
}
inline ::UnityEngine::LayerMask UnityEngine::LayerMask::op_Implicit___UnityEngine__LayerMask(int32_t  intVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LayerMask>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(nullptr, ___internal_method, intVal);
}
inline int32_t UnityEngine::LayerMask::get_value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LayerMask>(),
                        {"get_value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::LayerMask::NameToLayer(::StringW  layerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LayerMask>(),
                        {"NameToLayer", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, layerName);
}
inline int32_t UnityEngine::LayerMask::NameToLayer_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  layerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LayerMask>(),
                        {"NameToLayer_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, layerName);
}
// Ctor Parameters [CppParam { name: "m_Mask", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LayerMask::LayerMask(int32_t  m_Mask) noexcept  {
this->m_Mask = m_Mask;
}
// Ctor Parameters []
constexpr ::UnityEngine::LayerMask::LayerMask()   {
}
