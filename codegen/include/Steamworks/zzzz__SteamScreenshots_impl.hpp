#pragma once
// IWYU pragma private; include "Steamworks/SteamScreenshots.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamScreenshots_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EVRScreenshotType_def.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_def.hpp"
#include "Steamworks/zzzz__ScreenshotHandle_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamScreenshots.WriteScreenshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ScreenshotHandle (*)(::ArrayW<uint8_t>, uint32_t, int32_t, int32_t)>(&::Steamworks::SteamScreenshots::WriteScreenshot)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805ba750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamScreenshots*>(),
                        {"WriteScreenshot", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamScreenshots.AddScreenshotToLibrary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ScreenshotHandle (*)(::StringW, ::StringW, int32_t, int32_t)>(&::Steamworks::SteamScreenshots::AddScreenshotToLibrary)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1805ba250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamScreenshots*>(),
                        {"AddScreenshotToLibrary", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamScreenshots.TriggerScreenshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamScreenshots::TriggerScreenshot)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ba720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamScreenshots*>(),
                        {"TriggerScreenshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamScreenshots.HookScreenshots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Steamworks::SteamScreenshots::HookScreenshots)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ba550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamScreenshots*>(),
                        {"HookScreenshots", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamScreenshots.SetLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::ScreenshotHandle, ::StringW)>(&::Steamworks::SteamScreenshots::SetLocation)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805ba5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamScreenshots*>(),
                        {"SetLocation", {}, {::i2c::type_of<::Steamworks::ScreenshotHandle>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamScreenshots.TagUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::ScreenshotHandle, ::Steamworks::CSteamID)>(&::Steamworks::SteamScreenshots::TagUser)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ba6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamScreenshots*>(),
                        {"TagUser", {}, {::i2c::type_of<::Steamworks::ScreenshotHandle>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamScreenshots.TagPublishedFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::ScreenshotHandle, ::Steamworks::PublishedFileId_t)>(&::Steamworks::SteamScreenshots::TagPublishedFile)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ba6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamScreenshots*>(),
                        {"TagPublishedFile", {}, {::i2c::type_of<::Steamworks::ScreenshotHandle>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamScreenshots.IsScreenshotsHooked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamScreenshots::IsScreenshotsHooked)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ba590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamScreenshots*>(),
                        {"IsScreenshotsHooked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamScreenshots.AddVRScreenshotToLibrary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ScreenshotHandle (*)(::Steamworks::EVRScreenshotType, ::StringW, ::StringW)>(&::Steamworks::SteamScreenshots::AddVRScreenshotToLibrary)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1805ba3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamScreenshots*>(),
                        {"AddVRScreenshotToLibrary", {}, {::i2c::type_of<::Steamworks::EVRScreenshotType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::ScreenshotHandle Steamworks::SteamScreenshots::WriteScreenshot(::ArrayW<uint8_t>  pubRGB, uint32_t  cubRGB, int32_t  nWidth, int32_t  nHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamScreenshots*>(),
                        {"WriteScreenshot", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ScreenshotHandle>(nullptr, ___internal_method, pubRGB, cubRGB, nWidth, nHeight);
}
inline ::Steamworks::ScreenshotHandle Steamworks::SteamScreenshots::AddScreenshotToLibrary(::StringW  pchFilename, ::StringW  pchThumbnailFilename, int32_t  nWidth, int32_t  nHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamScreenshots*>(),
                        {"AddScreenshotToLibrary", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ScreenshotHandle>(nullptr, ___internal_method, pchFilename, pchThumbnailFilename, nWidth, nHeight);
}
inline void Steamworks::SteamScreenshots::TriggerScreenshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamScreenshots*>(),
                        {"TriggerScreenshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Steamworks::SteamScreenshots::HookScreenshots(bool  bHook)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamScreenshots*>(),
                        {"HookScreenshots", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bHook);
}
inline bool Steamworks::SteamScreenshots::SetLocation(::Steamworks::ScreenshotHandle  hScreenshot, ::StringW  pchLocation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamScreenshots*>(),
                        {"SetLocation", {}, {::i2c::type_of<::Steamworks::ScreenshotHandle>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hScreenshot, pchLocation);
}
inline bool Steamworks::SteamScreenshots::TagUser(::Steamworks::ScreenshotHandle  hScreenshot, ::Steamworks::CSteamID  steamID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamScreenshots*>(),
                        {"TagUser", {}, {::i2c::type_of<::Steamworks::ScreenshotHandle>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hScreenshot, steamID);
}
inline bool Steamworks::SteamScreenshots::TagPublishedFile(::Steamworks::ScreenshotHandle  hScreenshot, ::Steamworks::PublishedFileId_t  unPublishedFileID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamScreenshots*>(),
                        {"TagPublishedFile", {}, {::i2c::type_of<::Steamworks::ScreenshotHandle>(), ::i2c::type_of<::Steamworks::PublishedFileId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hScreenshot, unPublishedFileID);
}
inline bool Steamworks::SteamScreenshots::IsScreenshotsHooked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamScreenshots*>(),
                        {"IsScreenshotsHooked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Steamworks::ScreenshotHandle Steamworks::SteamScreenshots::AddVRScreenshotToLibrary(::Steamworks::EVRScreenshotType  eType, ::StringW  pchFilename, ::StringW  pchVRFilename)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamScreenshots*>(),
                        {"AddVRScreenshotToLibrary", {}, {::i2c::type_of<::Steamworks::EVRScreenshotType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ScreenshotHandle>(nullptr, ___internal_method, eType, pchFilename, pchVRFilename);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamScreenshots::SteamScreenshots()   {
}
