#pragma once
// IWYU pragma private; include "GlobalNamespace/ErrorMenuTester.hpp"
#include "GlobalNamespace/zzzz__ErrorUtils_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ErrorMenuTester_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ErrorMenuTester._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ErrorMenuTester::*)()>(&::GlobalNamespace::ErrorMenuTester::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorMenuTester*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ErrorUtils_ErrorType& GlobalNamespace::ErrorMenuTester::__cordl_internal_get_errorType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorType;
}
constexpr ::GlobalNamespace::ErrorUtils_ErrorType const& GlobalNamespace::ErrorMenuTester::__cordl_internal_get_errorType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorType;
}
constexpr void GlobalNamespace::ErrorMenuTester::__cordl_internal_set_errorType(::GlobalNamespace::ErrorUtils_ErrorType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorType = value;
}
inline void GlobalNamespace::ErrorMenuTester::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorMenuTester*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ErrorMenuTester* GlobalNamespace::ErrorMenuTester::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ErrorMenuTester*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ErrorMenuTester::ErrorMenuTester()   {
}
