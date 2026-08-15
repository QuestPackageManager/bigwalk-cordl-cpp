#pragma once
// IWYU pragma private; include "Animancer/FastComparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Animancer/zzzz__FastComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Animancer::FastComparer.System_Collections_Generic_IEqualityComparer_System_Object__Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::FastComparer::*)(::System::Object*, ::System::Object*)>(&::Animancer::FastComparer::System_Collections_Generic_IEqualityComparer_System_Object__Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802eda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FastComparer*>(),
                        {"System.Collections.Generic.IEqualityComparer<System.Object>.Equals", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FastComparer.System_Collections_Generic_IEqualityComparer_System_Object__GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::FastComparer::*)(::System::Object*)>(&::Animancer::FastComparer::System_Collections_Generic_IEqualityComparer_System_Object__GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eda80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FastComparer*>(),
                        {"System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::FastComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::FastComparer::*)()>(&::Animancer::FastComparer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FastComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::FastComparer::setStaticF_Instance(::Animancer::FastComparer*  value)  {
::cordl_internals::setStaticField<::Animancer::FastComparer*, "Instance", ::Animancer::FastComparer*>(std::forward<::Animancer::FastComparer*>(value));
}
inline ::Animancer::FastComparer* Animancer::FastComparer::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Animancer::FastComparer*, "Instance", ::Animancer::FastComparer*>();
}
inline bool Animancer::FastComparer::System_Collections_Generic_IEqualityComparer_System_Object__Equals(::System::Object*  x, ::System::Object*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FastComparer*>(),
                        {"System.Collections.Generic.IEqualityComparer<System.Object>.Equals", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t Animancer::FastComparer::System_Collections_Generic_IEqualityComparer_System_Object__GetHashCode(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FastComparer*>(),
                        {"System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Animancer::FastComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::FastComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::FastComparer* Animancer::FastComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::FastComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Object*>"
constexpr  Animancer::FastComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>* Animancer::FastComparer::i___System__Collections__Generic__IEqualityComparer_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::FastComparer::FastComparer()   {
}
