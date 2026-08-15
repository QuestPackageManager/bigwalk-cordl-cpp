#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsUtils_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Name_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsUtils.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Mono::Btls::MonoBtlsUtils::Compare)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181db72e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsUtils*>(),
                        {"Compare", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsUtils.AppendEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Text::StringBuilder*, ::Mono::Btls::MonoBtlsX509Name*, int32_t, ::StringW, bool)>(&::Mono::Btls::MonoBtlsUtils::AppendEntry)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x181db6df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsUtils*>(),
                        {"AppendEntry", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509Name*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsUtils.FormatName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Mono::Btls::MonoBtlsX509Name*, bool, ::StringW, bool)>(&::Mono::Btls::MonoBtlsUtils::FormatName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181db7340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsUtils*>(),
                        {"FormatName", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Name*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsUtils::setStaticF_emailOid(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "emailOid", ::Mono::Btls::MonoBtlsUtils*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Btls::MonoBtlsUtils::getStaticF_emailOid()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "emailOid", ::Mono::Btls::MonoBtlsUtils*>();
}
inline bool Mono::Btls::MonoBtlsUtils::Compare(::ArrayW<uint8_t>  a, ::ArrayW<uint8_t>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsUtils*>(),
                        {"Compare", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Mono::Btls::MonoBtlsUtils::AppendEntry(::System::Text::StringBuilder*  sb, ::Mono::Btls::MonoBtlsX509Name*  name, int32_t  index, ::StringW  separator, bool  quotes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsUtils*>(),
                        {"AppendEntry", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509Name*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sb, name, index, separator, quotes);
}
inline ::StringW Mono::Btls::MonoBtlsUtils::FormatName(::Mono::Btls::MonoBtlsX509Name*  name, bool  reversed, ::StringW  separator, bool  quotes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsUtils*>(),
                        {"FormatName", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Name*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name, reversed, separator, quotes);
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsUtils::MonoBtlsUtils()   {
}
