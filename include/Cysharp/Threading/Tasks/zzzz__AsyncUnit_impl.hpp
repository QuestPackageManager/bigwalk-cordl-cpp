#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AsyncUnit.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncUnit.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::AsyncUnit::*)()>(&::Cysharp::Threading::Tasks::AsyncUnit::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnit>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnit>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncUnit.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::AsyncUnit::*)(::Cysharp::Threading::Tasks::AsyncUnit)>(&::Cysharp::Threading::Tasks::AsyncUnit::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnit>(),
                        {"Equals", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::AsyncUnit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncUnit.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Cysharp::Threading::Tasks::AsyncUnit::*)()>(&::Cysharp::Threading::Tasks::AsyncUnit::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18172d460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnit>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnit>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::AsyncUnit::setStaticF_Default(::Cysharp::Threading::Tasks::AsyncUnit  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::AsyncUnit, "Default", ::Cysharp::Threading::Tasks::AsyncUnit>(std::forward<::Cysharp::Threading::Tasks::AsyncUnit>(value));
}
inline ::Cysharp::Threading::Tasks::AsyncUnit Cysharp::Threading::Tasks::AsyncUnit::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::AsyncUnit, "Default", ::Cysharp::Threading::Tasks::AsyncUnit>();
}
inline int32_t Cysharp::Threading::Tasks::AsyncUnit::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnit>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::AsyncUnit::Equals(::Cysharp::Threading::Tasks::AsyncUnit  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnit>(),
                        {"Equals", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::AsyncUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW Cysharp::Threading::Tasks::AsyncUnit::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnit>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr  Cysharp::Threading::Tasks::AsyncUnit::operator ::System::IEquatable_1<::Cysharp::Threading::Tasks::AsyncUnit>*()  {
return static_cast<::System::IEquatable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr ::System::IEquatable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::AsyncUnit::i___System__IEquatable_1___Cysharp__Threading__Tasks__AsyncUnit_()  {
return static_cast<::System::IEquatable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::AsyncUnit::AsyncUnit()   {
}
