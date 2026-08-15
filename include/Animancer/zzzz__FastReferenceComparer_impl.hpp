#pragma once
// IWYU pragma private; include "Animancer/FastReferenceComparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Animancer/zzzz__FastReferenceComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Animancer::FastReferenceComparer.System_Collections_Generic_IEqualityComparer_System_Object__Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::FastReferenceComparer::*)(::System::Object*, ::System::Object*)>(&::Animancer::FastReferenceComparer::System_Collections_Generic_IEqualityComparer_System_Object__Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FastReferenceComparer*>(),
                        {"System.Collections.Generic.IEqualityComparer<System.Object>.Equals", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FastReferenceComparer.System_Collections_Generic_IEqualityComparer_System_Object__GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::FastReferenceComparer::*)(::System::Object*)>(&::Animancer::FastReferenceComparer::System_Collections_Generic_IEqualityComparer_System_Object__GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eda80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FastReferenceComparer*>(),
                        {"System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FastReferenceComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::FastReferenceComparer::*)()>(&::Animancer::FastReferenceComparer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FastReferenceComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::FastReferenceComparer::setStaticF_Instance(::Animancer::FastReferenceComparer*  value)  {
::cordl_internals::setStaticField<::Animancer::FastReferenceComparer*, "Instance", ::Animancer::FastReferenceComparer*>(std::forward<::Animancer::FastReferenceComparer*>(value));
}
inline ::Animancer::FastReferenceComparer* Animancer::FastReferenceComparer::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Animancer::FastReferenceComparer*, "Instance", ::Animancer::FastReferenceComparer*>();
}
inline bool Animancer::FastReferenceComparer::System_Collections_Generic_IEqualityComparer_System_Object__Equals(::System::Object*  x, ::System::Object*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FastReferenceComparer*>(),
                        {"System.Collections.Generic.IEqualityComparer<System.Object>.Equals", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t Animancer::FastReferenceComparer::System_Collections_Generic_IEqualityComparer_System_Object__GetHashCode(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FastReferenceComparer*>(),
                        {"System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Animancer::FastReferenceComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FastReferenceComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::FastReferenceComparer* Animancer::FastReferenceComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::FastReferenceComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Object*>"
constexpr  Animancer::FastReferenceComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>* Animancer::FastReferenceComparer::i___System__Collections__Generic__IEqualityComparer_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::FastReferenceComparer::FastReferenceComparer()   {
}
