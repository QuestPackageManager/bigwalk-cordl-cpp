#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODParameters.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.get_isOrthographic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::LODParameters::*)()>(&::UnityEngine::Rendering::LODParameters::get_isOrthographic)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18170da80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"get_isOrthographic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.set_isOrthographic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LODParameters::*)(bool)>(&::UnityEngine::Rendering::LODParameters::set_isOrthographic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822a9f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"set_isOrthographic", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.get_cameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::LODParameters::*)()>(&::UnityEngine::Rendering::LODParameters::get_cameraPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805c3280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"get_cameraPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.set_cameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LODParameters::*)(::UnityEngine::Vector3)>(&::UnityEngine::Rendering::LODParameters::set_cameraPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822104b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"set_cameraPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.get_fieldOfView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::LODParameters::*)()>(&::UnityEngine::Rendering::LODParameters::get_fieldOfView)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"get_fieldOfView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.set_fieldOfView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LODParameters::*)(float_t)>(&::UnityEngine::Rendering::LODParameters::set_fieldOfView)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"set_fieldOfView", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.get_orthoSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::LODParameters::*)()>(&::UnityEngine::Rendering::LODParameters::get_orthoSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"get_orthoSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.set_orthoSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LODParameters::*)(float_t)>(&::UnityEngine::Rendering::LODParameters::set_orthoSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"set_orthoSize", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.get_cameraPixelHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::LODParameters::*)()>(&::UnityEngine::Rendering::LODParameters::get_cameraPixelHeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"get_cameraPixelHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.set_cameraPixelHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LODParameters::*)(int32_t)>(&::UnityEngine::Rendering::LODParameters::set_cameraPixelHeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"set_cameraPixelHeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::LODParameters::*)(::UnityEngine::Rendering::LODParameters)>(&::UnityEngine::Rendering::LODParameters::Equals)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1822a9ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Rendering::LODParameters>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::LODParameters::*)(::System::Object*)>(&::UnityEngine::Rendering::LODParameters::Equals)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1822a9db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                    {::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODParameters.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::LODParameters::*)()>(&::UnityEngine::Rendering::LODParameters::GetHashCode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1822a9ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                    {::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::LODParameters::get_isOrthographic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"get_isOrthographic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::LODParameters::set_isOrthographic(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"set_isOrthographic", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::LODParameters::get_cameraPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"get_cameraPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::LODParameters::set_cameraPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"set_cameraPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::LODParameters::get_fieldOfView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"get_fieldOfView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::LODParameters::set_fieldOfView(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"set_fieldOfView", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::LODParameters::get_orthoSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"get_orthoSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::LODParameters::set_orthoSize(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"set_orthoSize", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::LODParameters::get_cameraPixelHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"get_cameraPixelHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::LODParameters::set_cameraPixelHeight(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"set_cameraPixelHeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::LODParameters::Equals(::UnityEngine::Rendering::LODParameters  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::LODParameters>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Rendering::LODParameters>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::LODParameters::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::LODParameters::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::LODParameters>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>"
constexpr  UnityEngine::Rendering::LODParameters::operator ::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>* UnityEngine::Rendering::LODParameters::i___System__IEquatable_1___UnityEngine__Rendering__LODParameters_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_IsOrthographic", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CameraPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FieldOfView", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OrthoSize", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CameraPixelHeight", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LODParameters::LODParameters(int32_t  m_IsOrthographic, ::UnityEngine::Vector3  m_CameraPosition, float_t  m_FieldOfView, float_t  m_OrthoSize, int32_t  m_CameraPixelHeight) noexcept  {
this->m_IsOrthographic = m_IsOrthographic;
this->m_CameraPosition = m_CameraPosition;
this->m_FieldOfView = m_FieldOfView;
this->m_OrthoSize = m_OrthoSize;
this->m_CameraPixelHeight = m_CameraPixelHeight;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODParameters::LODParameters()   {
}
