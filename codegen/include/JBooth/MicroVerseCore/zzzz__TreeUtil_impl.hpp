#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/TreeUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreeUtil_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionData_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeUtil.ApplyOcclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*, ::JBooth::MicroVerseCore::OcclusionData*, bool, bool)>(&::JBooth::MicroVerseCore::TreeUtil::ApplyOcclusion)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x181429a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeUtil*>(),
                        {"ApplyOcclusion", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeUtil::*)()>(&::JBooth::MicroVerseCore::TreeUtil::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void JBooth::MicroVerseCore::TreeUtil::setStaticF_occlusionShader(::UnityW<::UnityEngine::ComputeShader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::ComputeShader>, "occlusionShader", ::JBooth::MicroVerseCore::TreeUtil*>(std::forward<::UnityW<::UnityEngine::ComputeShader>>(value));
}
inline ::UnityW<::UnityEngine::ComputeShader> JBooth::MicroVerseCore::TreeUtil::getStaticF_occlusionShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::ComputeShader>, "occlusionShader", ::JBooth::MicroVerseCore::TreeUtil*>();
}
inline void JBooth::MicroVerseCore::TreeUtil::setStaticF__Result(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Result", ::JBooth::MicroVerseCore::TreeUtil*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeUtil::getStaticF__Result()  {
return ::cordl_internals::getStaticField<int32_t, "_Result", ::JBooth::MicroVerseCore::TreeUtil*>();
}
inline void JBooth::MicroVerseCore::TreeUtil::setStaticF__Positions(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Positions", ::JBooth::MicroVerseCore::TreeUtil*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeUtil::getStaticF__Positions()  {
return ::cordl_internals::getStaticField<int32_t, "_Positions", ::JBooth::MicroVerseCore::TreeUtil*>();
}
inline void JBooth::MicroVerseCore::TreeUtil::setStaticF__Result_Width(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Result_Width", ::JBooth::MicroVerseCore::TreeUtil*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeUtil::getStaticF__Result_Width()  {
return ::cordl_internals::getStaticField<int32_t, "_Result_Width", ::JBooth::MicroVerseCore::TreeUtil*>();
}
inline void JBooth::MicroVerseCore::TreeUtil::setStaticF__Result_Height(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Result_Height", ::JBooth::MicroVerseCore::TreeUtil*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::TreeUtil::getStaticF__Result_Height()  {
return ::cordl_internals::getStaticField<int32_t, "_Result_Height", ::JBooth::MicroVerseCore::TreeUtil*>();
}
inline void JBooth::MicroVerseCore::TreeUtil::ApplyOcclusion(::UnityEngine::RenderTexture*  positions, ::JBooth::MicroVerseCore::OcclusionData*  od, bool  others, bool  selfSDF)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeUtil*>(),
                        {"ApplyOcclusion", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, positions, od, others, selfSDF);
}
inline void JBooth::MicroVerseCore::TreeUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::TreeUtil* JBooth::MicroVerseCore::TreeUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::TreeUtil*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::TreeUtil::TreeUtil()   {
}
