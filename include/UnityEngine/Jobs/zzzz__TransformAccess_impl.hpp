#pragma once
// IWYU pragma private; include "UnityEngine/Jobs/TransformAccess.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccess_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.get_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Jobs::TransformAccess::*)()>(&::UnityEngine::Jobs::TransformAccess::get_position)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182289090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"get_position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.get_rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Jobs::TransformAccess::*)()>(&::UnityEngine::Jobs::TransformAccess::get_rotation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822890f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"get_rotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.get_localScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Jobs::TransformAccess::*)()>(&::UnityEngine::Jobs::TransformAccess::get_localScale)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182288fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"get_localScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.get_localToWorldMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Jobs::TransformAccess::*)()>(&::UnityEngine::Jobs::TransformAccess::get_localToWorldMatrix)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182289010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"get_localToWorldMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.get_isValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Jobs::TransformAccess::*)()>(&::UnityEngine::Jobs::TransformAccess::get_isValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ff710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"get_isValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.SetPositionAndRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Jobs::TransformAccess::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::Jobs::TransformAccess::SetPositionAndRotation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182288f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"SetPositionAndRotation", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.GetPositionAndRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Jobs::TransformAccess::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Jobs::TransformAccess::GetPositionAndRotation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182288f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"GetPositionAndRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.SetPositionAndRotation_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Jobs::TransformAccess>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Jobs::TransformAccess::SetPositionAndRotation_Internal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182288f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"SetPositionAndRotation_Internal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.GetPositionAndRotation_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Jobs::TransformAccess>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Jobs::TransformAccess::GetPositionAndRotation_Internal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182288f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"GetPositionAndRotation_Internal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.GetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Jobs::TransformAccess>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Jobs::TransformAccess::GetPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182288f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"GetPosition", {}, {::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.GetRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Jobs::TransformAccess>, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Jobs::TransformAccess::GetRotation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182288f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"GetRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.GetLocalScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Jobs::TransformAccess>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Jobs::TransformAccess::GetLocalScale)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182288ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"GetLocalScale", {}, {::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.GetLocalToWorldMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Jobs::TransformAccess>, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Jobs::TransformAccess::GetLocalToWorldMatrix)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182288f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"GetLocalToWorldMatrix", {}, {::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::Jobs::TransformAccess::get_position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"get_position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Quaternion UnityEngine::Jobs::TransformAccess::get_rotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"get_rotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Jobs::TransformAccess::get_localScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"get_localScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Jobs::TransformAccess::get_localToWorldMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"get_localToWorldMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(*this, ___internal_method);
}
inline bool UnityEngine::Jobs::TransformAccess::get_isValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"get_isValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Jobs::TransformAccess::SetPositionAndRotation(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"SetPositionAndRotation", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation);
}
inline void UnityEngine::Jobs::TransformAccess::GetPositionAndRotation(::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"GetPositionAndRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation);
}
inline void UnityEngine::Jobs::TransformAccess::SetPositionAndRotation_Internal(::by_ref<::UnityEngine::Jobs::TransformAccess>  access, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"SetPositionAndRotation_Internal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access, position, rotation);
}
inline void UnityEngine::Jobs::TransformAccess::GetPositionAndRotation_Internal(::by_ref<::UnityEngine::Jobs::TransformAccess>  access, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"GetPositionAndRotation_Internal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access, position, rotation);
}
inline void UnityEngine::Jobs::TransformAccess::GetPosition(::by_ref<::UnityEngine::Jobs::TransformAccess>  access, ::by_ref<::UnityEngine::Vector3>  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"GetPosition", {}, {::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access, p);
}
inline void UnityEngine::Jobs::TransformAccess::GetRotation(::by_ref<::UnityEngine::Jobs::TransformAccess>  access, ::by_ref<::UnityEngine::Quaternion>  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"GetRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access, r);
}
inline void UnityEngine::Jobs::TransformAccess::GetLocalScale(::by_ref<::UnityEngine::Jobs::TransformAccess>  access, ::by_ref<::UnityEngine::Vector3>  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"GetLocalScale", {}, {::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access, r);
}
inline void UnityEngine::Jobs::TransformAccess::GetLocalToWorldMatrix(::by_ref<::UnityEngine::Jobs::TransformAccess>  access, ::by_ref<::UnityEngine::Matrix4x4>  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                        {"GetLocalToWorldMatrix", {}, {::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access, m);
}
// Ctor Parameters [CppParam { name: "hierarchy", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Jobs::TransformAccess::TransformAccess(::System::IntPtr  hierarchy, int32_t  index) noexcept  {
this->hierarchy = hierarchy;
this->index = index;
}
// Ctor Parameters []
constexpr ::UnityEngine::Jobs::TransformAccess::TransformAccess()   {
}
