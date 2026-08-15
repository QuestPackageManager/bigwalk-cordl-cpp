#pragma once
// IWYU pragma private; include "Shipmate/Porting/MarketplaceDurable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmate/Porting/zzzz__MarketplaceDurable_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::MarketplaceDurable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::MarketplaceDurable::*)(::StringW, ::StringW, uint32_t)>(&::Shipmate::Porting::MarketplaceDurable::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18167ab70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::MarketplaceDurable*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::MarketplaceDurable.get_ProductName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmate::Porting::MarketplaceDurable::*)()>(&::Shipmate::Porting::MarketplaceDurable::get_ProductName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::MarketplaceDurable*>(),
                        {"get_ProductName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::MarketplaceDurable.get_XboxStoreId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmate::Porting::MarketplaceDurable::*)()>(&::Shipmate::Porting::MarketplaceDurable::get_XboxStoreId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::MarketplaceDurable*>(),
                        {"get_XboxStoreId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::MarketplaceDurable.get_SteamStoreId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Shipmate::Porting::MarketplaceDurable::*)()>(&::Shipmate::Porting::MarketplaceDurable::get_SteamStoreId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::MarketplaceDurable*>(),
                        {"get_SteamStoreId", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Shipmate::Porting::MarketplaceDurable::__cordl_internal_get_mProductName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mProductName;
}
constexpr ::StringW const& Shipmate::Porting::MarketplaceDurable::__cordl_internal_get_mProductName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mProductName;
}
constexpr void Shipmate::Porting::MarketplaceDurable::__cordl_internal_set_mProductName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mProductName = value;
}
constexpr ::StringW& Shipmate::Porting::MarketplaceDurable::__cordl_internal_get_mXboxStoreId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mXboxStoreId;
}
constexpr ::StringW const& Shipmate::Porting::MarketplaceDurable::__cordl_internal_get_mXboxStoreId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mXboxStoreId;
}
constexpr void Shipmate::Porting::MarketplaceDurable::__cordl_internal_set_mXboxStoreId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mXboxStoreId = value;
}
constexpr uint32_t& Shipmate::Porting::MarketplaceDurable::__cordl_internal_get_mSteamStoreId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mSteamStoreId;
}
constexpr uint32_t const& Shipmate::Porting::MarketplaceDurable::__cordl_internal_get_mSteamStoreId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mSteamStoreId;
}
constexpr void Shipmate::Porting::MarketplaceDurable::__cordl_internal_set_mSteamStoreId(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mSteamStoreId = value;
}
inline void Shipmate::Porting::MarketplaceDurable::_ctor(::StringW  aProductName, ::StringW  aXboxStoreId, uint32_t  aSteamStoreId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::MarketplaceDurable*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aProductName, aXboxStoreId, aSteamStoreId);
}
inline ::StringW Shipmate::Porting::MarketplaceDurable::get_ProductName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::MarketplaceDurable*>(),
                        {"get_ProductName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Shipmate::Porting::MarketplaceDurable::get_XboxStoreId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::MarketplaceDurable*>(),
                        {"get_XboxStoreId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline uint32_t Shipmate::Porting::MarketplaceDurable::get_SteamStoreId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::MarketplaceDurable*>(),
                        {"get_SteamStoreId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::Shipmate::Porting::MarketplaceDurable* Shipmate::Porting::MarketplaceDurable::New_ctor(::StringW  aProductName, ::StringW  aXboxStoreId, uint32_t  aSteamStoreId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::MarketplaceDurable*>(aProductName, aXboxStoreId, aSteamStoreId));
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::MarketplaceDurable::MarketplaceDurable()   {
}
