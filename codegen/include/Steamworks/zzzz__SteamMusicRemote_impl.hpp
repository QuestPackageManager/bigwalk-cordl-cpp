#pragma once
// IWYU pragma private; include "Steamworks/SteamMusicRemote.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamMusicRemote_def.hpp"
#include "Steamworks/zzzz__AudioPlayback_Status_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.RegisterSteamMusicRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Steamworks::SteamMusicRemote::RegisterSteamMusicRemote)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805b34c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"RegisterSteamMusicRemote", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.DeregisterSteamMusicRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamMusicRemote::DeregisterSteamMusicRemote)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b3250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"DeregisterSteamMusicRemote", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.BIsCurrentMusicRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamMusicRemote::BIsCurrentMusicRemote)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b3180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"BIsCurrentMusicRemote", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.BActivationSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::Steamworks::SteamMusicRemote::BActivationSuccess)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b3140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"BActivationSuccess", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.SetDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Steamworks::SteamMusicRemote::SetDisplayName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805b3680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"SetDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.SetPNGIcon_64x64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, uint32_t)>(&::Steamworks::SteamMusicRemote::SetPNGIcon_64x64)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b3760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"SetPNGIcon_64x64", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.EnablePlayPrevious
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::Steamworks::SteamMusicRemote::EnablePlayPrevious)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b3300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"EnablePlayPrevious", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.EnablePlayNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::Steamworks::SteamMusicRemote::EnablePlayNext)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b32c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"EnablePlayNext", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.EnableShuffled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::Steamworks::SteamMusicRemote::EnableShuffled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b33c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"EnableShuffled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.EnableLooped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::Steamworks::SteamMusicRemote::EnableLooped)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b3280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"EnableLooped", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.EnableQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::Steamworks::SteamMusicRemote::EnableQueue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b3380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"EnableQueue", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.EnablePlaylists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::Steamworks::SteamMusicRemote::EnablePlaylists)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b3340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"EnablePlaylists", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.UpdatePlaybackStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::AudioPlayback_Status)>(&::Steamworks::SteamMusicRemote::UpdatePlaybackStatus)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b3b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"UpdatePlaybackStatus", {}, {::i2c::type_of<::Steamworks::AudioPlayback_Status>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.UpdateShuffled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::Steamworks::SteamMusicRemote::UpdateShuffled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b3ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"UpdateShuffled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.UpdateLooped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::Steamworks::SteamMusicRemote::UpdateLooped)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b3b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"UpdateLooped", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.UpdateVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t)>(&::Steamworks::SteamMusicRemote::UpdateVolume)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b3be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"UpdateVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.CurrentEntryWillChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamMusicRemote::CurrentEntryWillChange)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b3220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"CurrentEntryWillChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.CurrentEntryIsAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::Steamworks::SteamMusicRemote::CurrentEntryIsAvailable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b31e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"CurrentEntryIsAvailable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.UpdateCurrentEntryText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Steamworks::SteamMusicRemote::UpdateCurrentEntryText)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805b3a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"UpdateCurrentEntryText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.UpdateCurrentEntryElapsedSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Steamworks::SteamMusicRemote::UpdateCurrentEntryElapsedSeconds)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b3a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"UpdateCurrentEntryElapsedSeconds", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.UpdateCurrentEntryCoverArt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, uint32_t)>(&::Steamworks::SteamMusicRemote::UpdateCurrentEntryCoverArt)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b39b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"UpdateCurrentEntryCoverArt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.CurrentEntryDidChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamMusicRemote::CurrentEntryDidChange)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b31b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"CurrentEntryDidChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.QueueWillChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamMusicRemote::QueueWillChange)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b3490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"QueueWillChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.ResetQueueEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamMusicRemote::ResetQueueEntries)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b35d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"ResetQueueEntries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.SetQueueEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, ::StringW)>(&::Steamworks::SteamMusicRemote::SetQueueEntry)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805b38b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"SetQueueEntry", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.SetCurrentQueueEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Steamworks::SteamMusicRemote::SetCurrentQueueEntry)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b3640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"SetCurrentQueueEntry", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.QueueDidChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamMusicRemote::QueueDidChange)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b3460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"QueueDidChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.PlaylistWillChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamMusicRemote::PlaylistWillChange)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b3430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"PlaylistWillChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.ResetPlaylistEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamMusicRemote::ResetPlaylistEntries)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b35a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"ResetPlaylistEntries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.SetPlaylistEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, ::StringW)>(&::Steamworks::SteamMusicRemote::SetPlaylistEntry)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805b37b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"SetPlaylistEntry", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.SetCurrentPlaylistEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Steamworks::SteamMusicRemote::SetCurrentPlaylistEntry)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b3600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"SetCurrentPlaylistEntry", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusicRemote.PlaylistDidChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamMusicRemote::PlaylistDidChange)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b3400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"PlaylistDidChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Steamworks::SteamMusicRemote::RegisterSteamMusicRemote(::StringW  pchName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"RegisterSteamMusicRemote", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchName);
}
inline bool Steamworks::SteamMusicRemote::DeregisterSteamMusicRemote()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"DeregisterSteamMusicRemote", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamMusicRemote::BIsCurrentMusicRemote()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"BIsCurrentMusicRemote", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamMusicRemote::BActivationSuccess(bool  bValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"BActivationSuccess", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bValue);
}
inline bool Steamworks::SteamMusicRemote::SetDisplayName(::StringW  pchDisplayName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"SetDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchDisplayName);
}
inline bool Steamworks::SteamMusicRemote::SetPNGIcon_64x64(::ArrayW<uint8_t>  pvBuffer, uint32_t  cbBufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"SetPNGIcon_64x64", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pvBuffer, cbBufferLength);
}
inline bool Steamworks::SteamMusicRemote::EnablePlayPrevious(bool  bValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"EnablePlayPrevious", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bValue);
}
inline bool Steamworks::SteamMusicRemote::EnablePlayNext(bool  bValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"EnablePlayNext", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bValue);
}
inline bool Steamworks::SteamMusicRemote::EnableShuffled(bool  bValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"EnableShuffled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bValue);
}
inline bool Steamworks::SteamMusicRemote::EnableLooped(bool  bValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"EnableLooped", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bValue);
}
inline bool Steamworks::SteamMusicRemote::EnableQueue(bool  bValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"EnableQueue", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bValue);
}
inline bool Steamworks::SteamMusicRemote::EnablePlaylists(bool  bValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"EnablePlaylists", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bValue);
}
inline bool Steamworks::SteamMusicRemote::UpdatePlaybackStatus(::Steamworks::AudioPlayback_Status  nStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"UpdatePlaybackStatus", {}, {::i2c::type_of<::Steamworks::AudioPlayback_Status>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nStatus);
}
inline bool Steamworks::SteamMusicRemote::UpdateShuffled(bool  bValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"UpdateShuffled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bValue);
}
inline bool Steamworks::SteamMusicRemote::UpdateLooped(bool  bValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"UpdateLooped", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bValue);
}
inline bool Steamworks::SteamMusicRemote::UpdateVolume(float_t  flValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"UpdateVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flValue);
}
inline bool Steamworks::SteamMusicRemote::CurrentEntryWillChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"CurrentEntryWillChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamMusicRemote::CurrentEntryIsAvailable(bool  bAvailable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"CurrentEntryIsAvailable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bAvailable);
}
inline bool Steamworks::SteamMusicRemote::UpdateCurrentEntryText(::StringW  pchText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"UpdateCurrentEntryText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchText);
}
inline bool Steamworks::SteamMusicRemote::UpdateCurrentEntryElapsedSeconds(int32_t  nValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"UpdateCurrentEntryElapsedSeconds", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nValue);
}
inline bool Steamworks::SteamMusicRemote::UpdateCurrentEntryCoverArt(::ArrayW<uint8_t>  pvBuffer, uint32_t  cbBufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"UpdateCurrentEntryCoverArt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pvBuffer, cbBufferLength);
}
inline bool Steamworks::SteamMusicRemote::CurrentEntryDidChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"CurrentEntryDidChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamMusicRemote::QueueWillChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"QueueWillChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamMusicRemote::ResetQueueEntries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"ResetQueueEntries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamMusicRemote::SetQueueEntry(int32_t  nID, int32_t  nPosition, ::StringW  pchEntryText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"SetQueueEntry", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nID, nPosition, pchEntryText);
}
inline bool Steamworks::SteamMusicRemote::SetCurrentQueueEntry(int32_t  nID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"SetCurrentQueueEntry", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nID);
}
inline bool Steamworks::SteamMusicRemote::QueueDidChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"QueueDidChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamMusicRemote::PlaylistWillChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"PlaylistWillChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamMusicRemote::ResetPlaylistEntries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"ResetPlaylistEntries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamMusicRemote::SetPlaylistEntry(int32_t  nID, int32_t  nPosition, ::StringW  pchEntryText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"SetPlaylistEntry", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nID, nPosition, pchEntryText);
}
inline bool Steamworks::SteamMusicRemote::SetCurrentPlaylistEntry(int32_t  nID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"SetCurrentPlaylistEntry", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nID);
}
inline bool Steamworks::SteamMusicRemote::PlaylistDidChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusicRemote*>(),
                        {"PlaylistDidChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamMusicRemote::SteamMusicRemote()   {
}
