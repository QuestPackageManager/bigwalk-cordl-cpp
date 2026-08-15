#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ISplineContainer.hpp"
#include "UnityEngine/Splines/zzzz__ISplineContainer_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/Splines/zzzz__KnotLinkCollection_def.hpp"
#include "UnityEngine/Splines/zzzz__Spline_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::ISplineContainer.get_Splines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>* (::UnityEngine::Splines::ISplineContainer::*)()>(&::UnityEngine::Splines::ISplineContainer::get_Splines)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::ISplineContainer*>(),
                    {::i2c::class_of<::UnityEngine::Splines::ISplineContainer*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ISplineContainer.set_Splines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::ISplineContainer::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*)>(&::UnityEngine::Splines::ISplineContainer::set_Splines)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::ISplineContainer*>(),
                    {::i2c::class_of<::UnityEngine::Splines::ISplineContainer*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ISplineContainer.get_KnotLinkCollection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::KnotLinkCollection* (::UnityEngine::Splines::ISplineContainer::*)()>(&::UnityEngine::Splines::ISplineContainer::get_KnotLinkCollection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::ISplineContainer*>(),
                    {::i2c::class_of<::UnityEngine::Splines::ISplineContainer*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>* UnityEngine::Splines::ISplineContainer::get_Splines()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::ISplineContainer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*>(this, ___internal_method);
}
inline void UnityEngine::Splines::ISplineContainer::set_Splines(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::ISplineContainer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Splines::KnotLinkCollection* UnityEngine::Splines::ISplineContainer::get_KnotLinkCollection()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::ISplineContainer*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::KnotLinkCollection*>(this, ___internal_method);
}
