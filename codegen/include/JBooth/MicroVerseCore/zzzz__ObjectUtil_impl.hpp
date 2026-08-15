#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ObjectUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectUtil_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionData_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectUtil.ApplyOcclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*, ::JBooth::MicroVerseCore::OcclusionData*, bool, bool)>(&::JBooth::MicroVerseCore::ObjectUtil::ApplyOcclusion)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x18140d8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectUtil*>(),
                        {"ApplyOcclusion", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectUtil::*)()>(&::JBooth::MicroVerseCore::ObjectUtil::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void JBooth::MicroVerseCore::ObjectUtil::setStaticF_occlusionShader(::UnityW<::UnityEngine::ComputeShader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::ComputeShader>, "occlusionShader", ::JBooth::MicroVerseCore::ObjectUtil*>(std::forward<::UnityW<::UnityEngine::ComputeShader>>(value));
}
inline ::UnityW<::UnityEngine::ComputeShader> JBooth::MicroVerseCore::ObjectUtil::getStaticF_occlusionShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::ComputeShader>, "occlusionShader", ::JBooth::MicroVerseCore::ObjectUtil*>();
}
inline void JBooth::MicroVerseCore::ObjectUtil::setStaticF__Result(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Result", ::JBooth::MicroVerseCore::ObjectUtil*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectUtil::getStaticF__Result()  {
return ::cordl_internals::getStaticField<int32_t, "_Result", ::JBooth::MicroVerseCore::ObjectUtil*>();
}
inline void JBooth::MicroVerseCore::ObjectUtil::setStaticF__Positions(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Positions", ::JBooth::MicroVerseCore::ObjectUtil*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectUtil::getStaticF__Positions()  {
return ::cordl_internals::getStaticField<int32_t, "_Positions", ::JBooth::MicroVerseCore::ObjectUtil*>();
}
inline void JBooth::MicroVerseCore::ObjectUtil::setStaticF__Result_Width(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Result_Width", ::JBooth::MicroVerseCore::ObjectUtil*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectUtil::getStaticF__Result_Width()  {
return ::cordl_internals::getStaticField<int32_t, "_Result_Width", ::JBooth::MicroVerseCore::ObjectUtil*>();
}
inline void JBooth::MicroVerseCore::ObjectUtil::setStaticF__Result_Height(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Result_Height", ::JBooth::MicroVerseCore::ObjectUtil*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::ObjectUtil::getStaticF__Result_Height()  {
return ::cordl_internals::getStaticField<int32_t, "_Result_Height", ::JBooth::MicroVerseCore::ObjectUtil*>();
}
inline void JBooth::MicroVerseCore::ObjectUtil::ApplyOcclusion(::UnityEngine::RenderTexture*  positions, ::JBooth::MicroVerseCore::OcclusionData*  od, bool  others, bool  selfSDF)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectUtil*>(),
                        {"ApplyOcclusion", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, positions, od, others, selfSDF);
}
inline void JBooth::MicroVerseCore::ObjectUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::ObjectUtil* JBooth::MicroVerseCore::ObjectUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::ObjectUtil*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::ObjectUtil::ObjectUtil()   {
}
