#pragma once
// IWYU pragma private; include "Steamworks/SteamParties.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamParties_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__ESteamPartyBeaconLocationData_def.hpp"
#include "Steamworks/zzzz__PartyBeaconID_t_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
#include "Steamworks/zzzz__SteamPartyBeaconLocation_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamParties.GetNumActiveBeacons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamParties::GetNumActiveBeacons)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b7af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"GetNumActiveBeacons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamParties.GetBeaconByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::PartyBeaconID_t (*)(uint32_t)>(&::Steamworks::SteamParties::GetBeaconByIndex)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b7920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"GetBeaconByIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamParties.GetBeaconDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::PartyBeaconID_t, ::by_ref<::Steamworks::CSteamID>, ::by_ref<::Steamworks::SteamPartyBeaconLocation_t>, ::by_ref<::StringW>, int32_t)>(&::Steamworks::SteamParties::GetBeaconDetails)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805b7960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"GetBeaconDetails", {}, {::i2c::type_of<::Steamworks::PartyBeaconID_t>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamPartyBeaconLocation_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamParties.JoinParty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PartyBeaconID_t)>(&::Steamworks::SteamParties::JoinParty)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b7b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"JoinParty", {}, {::i2c::type_of<::Steamworks::PartyBeaconID_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamParties.GetNumAvailableBeaconLocations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<uint32_t>)>(&::Steamworks::SteamParties::GetNumAvailableBeaconLocations)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b7b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"GetNumAvailableBeaconLocations", {}, {::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamParties.GetAvailableBeaconLocations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::Steamworks::SteamPartyBeaconLocation_t>, uint32_t)>(&::Steamworks::SteamParties::GetAvailableBeaconLocations)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b78d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"GetAvailableBeaconLocations", {}, {::i2c::type_of<::ArrayW<::Steamworks::SteamPartyBeaconLocation_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamParties.CreateBeacon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(uint32_t, ::by_ref<::Steamworks::SteamPartyBeaconLocation_t>, ::StringW, ::StringW)>(&::Steamworks::SteamParties::CreateBeacon)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805b7700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"CreateBeacon", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamPartyBeaconLocation_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamParties.OnReservationCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::PartyBeaconID_t, ::Steamworks::CSteamID)>(&::Steamworks::SteamParties::OnReservationCompleted)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b7ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"OnReservationCompleted", {}, {::i2c::type_of<::Steamworks::PartyBeaconID_t>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamParties.CancelReservation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::PartyBeaconID_t, ::Steamworks::CSteamID)>(&::Steamworks::SteamParties::CancelReservation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b7660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"CancelReservation", {}, {::i2c::type_of<::Steamworks::PartyBeaconID_t>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamParties.ChangeNumOpenSlots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::Steamworks::PartyBeaconID_t, uint32_t)>(&::Steamworks::SteamParties::ChangeNumOpenSlots)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b76b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"ChangeNumOpenSlots", {}, {::i2c::type_of<::Steamworks::PartyBeaconID_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamParties.DestroyBeacon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::PartyBeaconID_t)>(&::Steamworks::SteamParties::DestroyBeacon)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b7890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"DestroyBeacon", {}, {::i2c::type_of<::Steamworks::PartyBeaconID_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamParties.GetBeaconLocationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamPartyBeaconLocation_t, ::Steamworks::ESteamPartyBeaconLocationData, ::by_ref<::StringW>, int32_t)>(&::Steamworks::SteamParties::GetBeaconLocationData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805b7a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"GetBeaconLocationData", {}, {::i2c::type_of<::Steamworks::SteamPartyBeaconLocation_t>(), ::i2c::type_of<::Steamworks::ESteamPartyBeaconLocationData>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Steamworks::SteamParties::GetNumActiveBeacons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"GetNumActiveBeacons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline ::Steamworks::PartyBeaconID_t Steamworks::SteamParties::GetBeaconByIndex(uint32_t  unIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"GetBeaconByIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::PartyBeaconID_t>(nullptr, ___internal_method, unIndex);
}
inline bool Steamworks::SteamParties::GetBeaconDetails(::Steamworks::PartyBeaconID_t  ulBeaconID, ::by_ref<::Steamworks::CSteamID>  pSteamIDBeaconOwner, ::by_ref<::Steamworks::SteamPartyBeaconLocation_t>  pLocation, ::by_ref<::StringW>  pchMetadata, int32_t  cchMetadata)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"GetBeaconDetails", {}, {::i2c::type_of<::Steamworks::PartyBeaconID_t>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamPartyBeaconLocation_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ulBeaconID, pSteamIDBeaconOwner, pLocation, pchMetadata, cchMetadata);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamParties::JoinParty(::Steamworks::PartyBeaconID_t  ulBeaconID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"JoinParty", {}, {::i2c::type_of<::Steamworks::PartyBeaconID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, ulBeaconID);
}
inline bool Steamworks::SteamParties::GetNumAvailableBeaconLocations(::by_ref<uint32_t>  puNumLocations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"GetNumAvailableBeaconLocations", {}, {::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, puNumLocations);
}
inline bool Steamworks::SteamParties::GetAvailableBeaconLocations(::ArrayW<::Steamworks::SteamPartyBeaconLocation_t>  pLocationList, uint32_t  uMaxNumLocations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"GetAvailableBeaconLocations", {}, {::i2c::type_of<::ArrayW<::Steamworks::SteamPartyBeaconLocation_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pLocationList, uMaxNumLocations);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamParties::CreateBeacon(uint32_t  unOpenSlots, ::by_ref<::Steamworks::SteamPartyBeaconLocation_t>  pBeaconLocation, ::StringW  pchConnectString, ::StringW  pchMetadata)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"CreateBeacon", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamPartyBeaconLocation_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, unOpenSlots, pBeaconLocation, pchConnectString, pchMetadata);
}
inline void Steamworks::SteamParties::OnReservationCompleted(::Steamworks::PartyBeaconID_t  ulBeacon, ::Steamworks::CSteamID  steamIDUser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"OnReservationCompleted", {}, {::i2c::type_of<::Steamworks::PartyBeaconID_t>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ulBeacon, steamIDUser);
}
inline void Steamworks::SteamParties::CancelReservation(::Steamworks::PartyBeaconID_t  ulBeacon, ::Steamworks::CSteamID  steamIDUser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"CancelReservation", {}, {::i2c::type_of<::Steamworks::PartyBeaconID_t>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ulBeacon, steamIDUser);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamParties::ChangeNumOpenSlots(::Steamworks::PartyBeaconID_t  ulBeacon, uint32_t  unOpenSlots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"ChangeNumOpenSlots", {}, {::i2c::type_of<::Steamworks::PartyBeaconID_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, ulBeacon, unOpenSlots);
}
inline bool Steamworks::SteamParties::DestroyBeacon(::Steamworks::PartyBeaconID_t  ulBeacon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"DestroyBeacon", {}, {::i2c::type_of<::Steamworks::PartyBeaconID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ulBeacon);
}
inline bool Steamworks::SteamParties::GetBeaconLocationData(::Steamworks::SteamPartyBeaconLocation_t  BeaconLocation, ::Steamworks::ESteamPartyBeaconLocationData  eData, ::by_ref<::StringW>  pchDataStringOut, int32_t  cchDataStringOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamParties*>(),
                        {"GetBeaconLocationData", {}, {::i2c::type_of<::Steamworks::SteamPartyBeaconLocation_t>(), ::i2c::type_of<::Steamworks::ESteamPartyBeaconLocationData>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, BeaconLocation, eData, pchDataStringOut, cchDataStringOut);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamParties::SteamParties()   {
}
