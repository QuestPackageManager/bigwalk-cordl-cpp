#pragma once
// IWYU pragma private; include "Rewired/Utils/Libraries/CLZF2/CLZF2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/Libraries/CLZF2/zzzz__CLZF2_def.hpp"
#include "Rewired/Utils/Libraries/CLZF2/zzzz__CLZF2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS()   {
}
constexpr ::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS  Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS::Success{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS  Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS::OutputBufferTooSmall{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS  Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS::Einval{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS  Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS::ZeroSize{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::Rewired::Utils::Libraries::CLZF2::CLZF2.Compress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Rewired::Utils::Libraries::CLZF2::CLZF2::*)(::ArrayW<uint8_t>)>(&::Rewired::Utils::Libraries::CLZF2::CLZF2::Compress)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18192af70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Libraries::CLZF2::CLZF2*>(),
                        {"Compress", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Libraries::CLZF2::CLZF2.Decompress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Rewired::Utils::Libraries::CLZF2::CLZF2::*)(::ArrayW<uint8_t>)>(&::Rewired::Utils::Libraries::CLZF2::CLZF2::Decompress)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18192b050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Libraries::CLZF2::CLZF2*>(),
                        {"Decompress", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Libraries::CLZF2::CLZF2.SuLvAkBgwuCqzHFFrjHaIswCSYGH
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Libraries::CLZF2::CLZF2::*)(::ArrayW<uint8_t>, ::by_ref<::ArrayW<uint8_t>>)>(&::Rewired::Utils::Libraries::CLZF2::CLZF2::SuLvAkBgwuCqzHFFrjHaIswCSYGH)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x18192b2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Libraries::CLZF2::CLZF2*>(),
                        {"SuLvAkBgwuCqzHFFrjHaIswCSYGH", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Libraries::CLZF2::CLZF2.DpPbUlKqPMsyPYXHJwCFHzHqVAzb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Libraries::CLZF2::CLZF2::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::by_ref<::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS>)>(&::Rewired::Utils::Libraries::CLZF2::CLZF2::DpPbUlKqPMsyPYXHJwCFHzHqVAzb)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18192b150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Libraries::CLZF2::CLZF2*>(),
                        {"DpPbUlKqPMsyPYXHJwCFHzHqVAzb", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Libraries::CLZF2::CLZF2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Libraries::CLZF2::CLZF2::*)()>(&::Rewired::Utils::Libraries::CLZF2::CLZF2::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18192b6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Libraries::CLZF2::CLZF2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int64_t>& Rewired::Utils::Libraries::CLZF2::CLZF2::__cordl_internal_get_KCsZcqwRGVvSEDRBoaiJQkODlccR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KCsZcqwRGVvSEDRBoaiJQkODlccR;
}
constexpr ::ArrayW<int64_t> const& Rewired::Utils::Libraries::CLZF2::CLZF2::__cordl_internal_get_KCsZcqwRGVvSEDRBoaiJQkODlccR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KCsZcqwRGVvSEDRBoaiJQkODlccR;
}
constexpr void Rewired::Utils::Libraries::CLZF2::CLZF2::__cordl_internal_set_KCsZcqwRGVvSEDRBoaiJQkODlccR(::ArrayW<int64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KCsZcqwRGVvSEDRBoaiJQkODlccR = value;
}
inline ::ArrayW<uint8_t> Rewired::Utils::Libraries::CLZF2::CLZF2::Compress(::ArrayW<uint8_t>  inputBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Libraries::CLZF2::CLZF2*>(),
                        {"Compress", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inputBytes);
}
inline ::ArrayW<uint8_t> Rewired::Utils::Libraries::CLZF2::CLZF2::Decompress(::ArrayW<uint8_t>  inputBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Libraries::CLZF2::CLZF2*>(),
                        {"Decompress", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inputBytes);
}
inline int32_t Rewired::Utils::Libraries::CLZF2::CLZF2::SuLvAkBgwuCqzHFFrjHaIswCSYGH(::ArrayW<uint8_t>  _cordl_fixed_empty_name_whitespace, ::by_ref<::ArrayW<uint8_t>>  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Libraries::CLZF2::CLZF2*>(),
                        {"SuLvAkBgwuCqzHFFrjHaIswCSYGH", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t Rewired::Utils::Libraries::CLZF2::CLZF2::DpPbUlKqPMsyPYXHJwCFHzHqVAzb(::ArrayW<uint8_t>  _cordl_fixed_empty_name_whitespace, ::ArrayW<uint8_t>  _cordl_fixed_empty_name_whitespace_param_1, ::by_ref<::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS>  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Libraries::CLZF2::CLZF2*>(),
                        {"DpPbUlKqPMsyPYXHJwCFHzHqVAzb", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::Utils::Libraries::CLZF2::CLZF2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Libraries::CLZF2::CLZF2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Utils::Libraries::CLZF2::CLZF2* Rewired::Utils::Libraries::CLZF2::CLZF2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Libraries::CLZF2::CLZF2*>());
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Libraries::CLZF2::CLZF2::CLZF2()   {
}
