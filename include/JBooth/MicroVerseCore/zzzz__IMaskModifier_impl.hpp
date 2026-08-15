#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/IMaskModifier.hpp"
#include "JBooth/MicroVerseCore/zzzz__IMaskModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__MaskData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__MaskTarget_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::IMaskModifier.ApplyMaskStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::IMaskModifier::*)(::JBooth::MicroVerseCore::MaskData*)>(&::JBooth::MicroVerseCore::IMaskModifier::ApplyMaskStamp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::IMaskModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::IMaskModifier*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::IMaskModifier.GetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::JBooth::MicroVerseCore::MaskTarget> (::JBooth::MicroVerseCore::IMaskModifier::*)()>(&::JBooth::MicroVerseCore::IMaskModifier::GetTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::IMaskModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::IMaskModifier*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::IMaskModifier.NeedCurvatureMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::IMaskModifier::*)()>(&::JBooth::MicroVerseCore::IMaskModifier::NeedCurvatureMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::IMaskModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::IMaskModifier*>(), 2}
                ));
    return ___internal_method;
  }
};
inline void JBooth::MicroVerseCore::IMaskModifier::ApplyMaskStamp(::JBooth::MicroVerseCore::MaskData*  maskData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::IMaskModifier*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maskData);
}
inline ::UnityW<::JBooth::MicroVerseCore::MaskTarget> JBooth::MicroVerseCore::IMaskModifier::GetTarget()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::IMaskModifier*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::JBooth::MicroVerseCore::MaskTarget>>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::IMaskModifier::NeedCurvatureMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::IMaskModifier*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr  JBooth::MicroVerseCore::IMaskModifier::operator ::JBooth::MicroVerseCore::IModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* JBooth::MicroVerseCore::IMaskModifier::i___JBooth__MicroVerseCore__IModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
