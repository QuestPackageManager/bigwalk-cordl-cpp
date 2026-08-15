#pragma once
// IWYU pragma private; include "GlobalNamespace/HouseSessionInfo.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsInfo_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformManager_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HouseSessionInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HouseSessionInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseSessionInfo::*)()>(&::GlobalNamespace::HouseSessionInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSessionInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::HouseSessionInfo::__cordl_internal_get_hostId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostId;
}
constexpr ::StringW const& GlobalNamespace::HouseSessionInfo::__cordl_internal_get_hostId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostId;
}
constexpr void GlobalNamespace::HouseSessionInfo::__cordl_internal_set_hostId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hostId = value;
}
constexpr ::StringW& GlobalNamespace::HouseSessionInfo::__cordl_internal_get_worldName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldName;
}
constexpr ::StringW const& GlobalNamespace::HouseSessionInfo::__cordl_internal_get_worldName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldName;
}
constexpr void GlobalNamespace::HouseSessionInfo::__cordl_internal_set_worldName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldName = value;
}
constexpr ::StringW& GlobalNamespace::HouseSessionInfo::__cordl_internal_get_userName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userName;
}
constexpr ::StringW const& GlobalNamespace::HouseSessionInfo::__cordl_internal_get_userName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userName;
}
constexpr void GlobalNamespace::HouseSessionInfo::__cordl_internal_set_userName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userName = value;
}
constexpr ::StringW& GlobalNamespace::HouseSessionInfo::__cordl_internal_get_joinCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinCode;
}
constexpr ::StringW const& GlobalNamespace::HouseSessionInfo::__cordl_internal_get_joinCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinCode;
}
constexpr void GlobalNamespace::HouseSessionInfo::__cordl_internal_set_joinCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joinCode = value;
}
constexpr bool& GlobalNamespace::HouseSessionInfo::__cordl_internal_get_crossplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crossplay;
}
constexpr bool const& GlobalNamespace::HouseSessionInfo::__cordl_internal_get_crossplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crossplay;
}
constexpr void GlobalNamespace::HouseSessionInfo::__cordl_internal_set_crossplay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crossplay = value;
}
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform& GlobalNamespace::HouseSessionInfo::__cordl_internal_get_platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const& GlobalNamespace::HouseSessionInfo::__cordl_internal_get_platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr void GlobalNamespace::HouseSessionInfo::__cordl_internal_set_platform(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platform = value;
}
constexpr ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>& GlobalNamespace::HouseSessionInfo::__cordl_internal_get_sessionDetailsInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionDetailsInfo;
}
constexpr ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo> const& GlobalNamespace::HouseSessionInfo::__cordl_internal_get_sessionDetailsInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionDetailsInfo;
}
constexpr void GlobalNamespace::HouseSessionInfo::__cordl_internal_set_sessionDetailsInfo(::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sessionDetailsInfo = value;
}
inline void GlobalNamespace::HouseSessionInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSessionInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HouseSessionInfo* GlobalNamespace::HouseSessionInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HouseSessionInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HouseSessionInfo::HouseSessionInfo()   {
}
