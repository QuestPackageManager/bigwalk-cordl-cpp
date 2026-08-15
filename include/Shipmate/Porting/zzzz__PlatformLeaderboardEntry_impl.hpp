#pragma once
// IWYU pragma private; include "Shipmate/Porting/PlatformLeaderboardEntry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmate/Porting/zzzz__PlatformLeaderboardEntry_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::PlatformLeaderboardEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::PlatformLeaderboardEntry::*)()>(&::Shipmate::Porting::PlatformLeaderboardEntry::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::PlatformLeaderboardEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Shipmate::Porting::PlatformLeaderboardEntry::__cordl_internal_get_rank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rank;
}
constexpr int32_t const& Shipmate::Porting::PlatformLeaderboardEntry::__cordl_internal_get_rank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rank;
}
constexpr void Shipmate::Porting::PlatformLeaderboardEntry::__cordl_internal_set_rank(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rank = value;
}
constexpr ::StringW& Shipmate::Porting::PlatformLeaderboardEntry::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Shipmate::Porting::PlatformLeaderboardEntry::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Shipmate::Porting::PlatformLeaderboardEntry::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr int64_t& Shipmate::Porting::PlatformLeaderboardEntry::__cordl_internal_get_score()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___score;
}
constexpr int64_t const& Shipmate::Porting::PlatformLeaderboardEntry::__cordl_internal_get_score() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___score;
}
constexpr void Shipmate::Porting::PlatformLeaderboardEntry::__cordl_internal_set_score(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___score = value;
}
constexpr ::ArrayW<uint8_t>& Shipmate::Porting::PlatformLeaderboardEntry::__cordl_internal_get_smallData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallData;
}
constexpr ::ArrayW<uint8_t> const& Shipmate::Porting::PlatformLeaderboardEntry::__cordl_internal_get_smallData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallData;
}
constexpr void Shipmate::Porting::PlatformLeaderboardEntry::__cordl_internal_set_smallData(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smallData = value;
}
inline void Shipmate::Porting::PlatformLeaderboardEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::PlatformLeaderboardEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::PlatformLeaderboardEntry* Shipmate::Porting::PlatformLeaderboardEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::PlatformLeaderboardEntry*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::PlatformLeaderboardEntry::PlatformLeaderboardEntry()   {
}
