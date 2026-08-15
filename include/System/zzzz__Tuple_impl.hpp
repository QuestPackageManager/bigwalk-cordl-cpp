#pragma once
// IWYU pragma private; include "System/Tuple.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Tuple_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "System/zzzz__Tuple_3_def.hpp"
//  Writing Method size for method: ::System::Tuple.CombineHashCodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::System::Tuple::CombineHashCodes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180baefc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Tuple*>(),
                        {"CombineHashCodes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Tuple.CombineHashCodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(&::System::Tuple::CombineHashCodes)> {
  constexpr static std::size_t size = 0x1610;
  constexpr static std::size_t addrs = 0x180baefd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Tuple*>(),
                        {"CombineHashCodes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Tuple.CombineHashCodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t, int32_t)>(&::System::Tuple::CombineHashCodes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1817285e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Tuple*>(),
                        {"CombineHashCodes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T1,typename T2>
inline ::System::Tuple_2<T1,T2>* System::Tuple::Create(T1  item1, T2  item2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Tuple*>(),
                    {"Create", {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Tuple_2<T1,T2>*>(nullptr, ___internal_method, item1, item2);
}
template<typename T1,typename T2,typename T3>
inline ::System::Tuple_3<T1,T2,T3>* System::Tuple::Create(T1  item1, T2  item2, T3  item3)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Tuple*>(),
                    {"Create", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Tuple_3<T1,T2,T3>*>(nullptr, ___internal_method, item1, item2, item3);
}
inline int32_t System::Tuple::CombineHashCodes(int32_t  h1, int32_t  h2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Tuple*>(),
                        {"CombineHashCodes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, h1, h2);
}
inline int32_t System::Tuple::CombineHashCodes(int32_t  h1, int32_t  h2, int32_t  h3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Tuple*>(),
                        {"CombineHashCodes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, h1, h2, h3);
}
inline int32_t System::Tuple::CombineHashCodes(int32_t  h1, int32_t  h2, int32_t  h3, int32_t  h4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Tuple*>(),
                        {"CombineHashCodes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, h1, h2, h3, h4);
}
// Ctor Parameters []
constexpr ::System::Tuple::Tuple()   {
}
