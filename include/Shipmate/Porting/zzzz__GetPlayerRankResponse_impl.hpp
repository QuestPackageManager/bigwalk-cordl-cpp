#pragma once
// IWYU pragma private; include "Shipmate/Porting/GetPlayerRankResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmate/Porting/zzzz__GetPlayerRankResponse_def.hpp"
#include "Shipmate/Porting/zzzz__PlatformLeaderboardEntry_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::GetPlayerRankResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::GetPlayerRankResponse::*)()>(&::Shipmate::Porting::GetPlayerRankResponse::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::GetPlayerRankResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Shipmate::Porting::PlatformLeaderboardEntry*& Shipmate::Porting::GetPlayerRankResponse::__cordl_internal_get_playerEntry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerEntry;
}
constexpr ::Shipmate::Porting::PlatformLeaderboardEntry* const& Shipmate::Porting::GetPlayerRankResponse::__cordl_internal_get_playerEntry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerEntry;
}
constexpr void Shipmate::Porting::GetPlayerRankResponse::__cordl_internal_set_playerEntry(::Shipmate::Porting::PlatformLeaderboardEntry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerEntry = value;
}
constexpr int32_t& Shipmate::Porting::GetPlayerRankResponse::__cordl_internal_get_totalEntries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalEntries;
}
constexpr int32_t const& Shipmate::Porting::GetPlayerRankResponse::__cordl_internal_get_totalEntries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalEntries;
}
constexpr void Shipmate::Porting::GetPlayerRankResponse::__cordl_internal_set_totalEntries(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalEntries = value;
}
inline void Shipmate::Porting::GetPlayerRankResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::GetPlayerRankResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::GetPlayerRankResponse* Shipmate::Porting::GetPlayerRankResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::GetPlayerRankResponse*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::GetPlayerRankResponse::GetPlayerRankResponse()   {
}
