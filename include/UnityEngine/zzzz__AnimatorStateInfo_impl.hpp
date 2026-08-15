#pragma once
// IWYU pragma private; include "UnityEngine/AnimatorStateInfo.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::AnimatorStateInfo.IsName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AnimatorStateInfo::*)(::StringW)>(&::UnityEngine::AnimatorStateInfo::IsName)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182233f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorStateInfo>(),
                        {"IsName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorStateInfo.get_fullPathHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AnimatorStateInfo::*)()>(&::UnityEngine::AnimatorStateInfo::get_fullPathHash)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorStateInfo>(),
                        {"get_fullPathHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorStateInfo.get_shortNameHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AnimatorStateInfo::*)()>(&::UnityEngine::AnimatorStateInfo::get_shortNameHash)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorStateInfo>(),
                        {"get_shortNameHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorStateInfo.get_normalizedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AnimatorStateInfo::*)()>(&::UnityEngine::AnimatorStateInfo::get_normalizedTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorStateInfo>(),
                        {"get_normalizedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorStateInfo.get_length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AnimatorStateInfo::*)()>(&::UnityEngine::AnimatorStateInfo::get_length)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorStateInfo>(),
                        {"get_length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorStateInfo.get_loop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AnimatorStateInfo::*)()>(&::UnityEngine::AnimatorStateInfo::get_loop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182051850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorStateInfo>(),
                        {"get_loop", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::AnimatorStateInfo::IsName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorStateInfo>(),
                        {"IsName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, name);
}
inline int32_t UnityEngine::AnimatorStateInfo::get_fullPathHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorStateInfo>(),
                        {"get_fullPathHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::AnimatorStateInfo::get_shortNameHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorStateInfo>(),
                        {"get_shortNameHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline float_t UnityEngine::AnimatorStateInfo::get_normalizedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorStateInfo>(),
                        {"get_normalizedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::AnimatorStateInfo::get_length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorStateInfo>(),
                        {"get_length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline bool UnityEngine::AnimatorStateInfo::get_loop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimatorStateInfo>(),
                        {"get_loop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Name", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Path", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FullPath", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NormalizedTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Length", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Speed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SpeedMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Tag", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Loop", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimatorStateInfo::AnimatorStateInfo(int32_t  m_Name, int32_t  m_Path, int32_t  m_FullPath, float_t  m_NormalizedTime, float_t  m_Length, float_t  m_Speed, float_t  m_SpeedMultiplier, int32_t  m_Tag, int32_t  m_Loop) noexcept  {
this->m_Name = m_Name;
this->m_Path = m_Path;
this->m_FullPath = m_FullPath;
this->m_NormalizedTime = m_NormalizedTime;
this->m_Length = m_Length;
this->m_Speed = m_Speed;
this->m_SpeedMultiplier = m_SpeedMultiplier;
this->m_Tag = m_Tag;
this->m_Loop = m_Loop;
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimatorStateInfo::AnimatorStateInfo()   {
}
