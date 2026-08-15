#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/RuntimeHelpersAbstraction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__RuntimeHelpersAbstraction_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__RuntimeHelpersAbstraction_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1<T>::setStaticF_IsWellKnownType(bool  value)  {
::cordl_internals::setStaticField<bool, "IsWellKnownType", ::Cysharp::Threading::Tasks::Internal::RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1<T>*>(std::forward<bool>(value));
}
template<typename T>
inline bool Cysharp::Threading::Tasks::Internal::RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1<T>::getStaticF_IsWellKnownType()  {
return ::cordl_internals::getStaticField<bool, "IsWellKnownType", ::Cysharp::Threading::Tasks::Internal::RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1<T>*>();
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1<T>::RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::RuntimeHelpersAbstraction.WellKnownNoReferenceContainsTypeInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Cysharp::Threading::Tasks::Internal::RuntimeHelpersAbstraction::WellKnownNoReferenceContainsTypeInitialize)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x181e7fee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::RuntimeHelpersAbstraction*>(),
                        {"WellKnownNoReferenceContainsTypeInitialize", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline bool Cysharp::Threading::Tasks::Internal::RuntimeHelpersAbstraction::IsWellKnownNoReferenceContainsType()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::RuntimeHelpersAbstraction*>(),
                    {"IsWellKnownNoReferenceContainsType", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::Internal::RuntimeHelpersAbstraction::WellKnownNoReferenceContainsTypeInitialize(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::RuntimeHelpersAbstraction*>(),
                        {"WellKnownNoReferenceContainsTypeInitialize", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::RuntimeHelpersAbstraction::RuntimeHelpersAbstraction()   {
}
