#pragma once
// IWYU pragma private; include "Unity/Multiplayer/PlayMode/CurrentPlayer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Multiplayer/PlayMode/zzzz__CurrentPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "Unity/Multiplayer/PlayMode/zzzz__CurrentPlayerApi_def.hpp"
//  Writing Method size for method: ::Unity::Multiplayer::PlayMode::CurrentPlayer.EnsureInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Multiplayer::PlayMode::CurrentPlayer::EnsureInitialized)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1822ed990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Multiplayer::PlayMode::CurrentPlayer*>(),
                        {"EnsureInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Multiplayer::PlayMode::CurrentPlayer.get_Tags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (*)()>(&::Unity::Multiplayer::PlayMode::CurrentPlayer::get_Tags)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1822edc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Multiplayer::PlayMode::CurrentPlayer*>(),
                        {"get_Tags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Multiplayer::PlayMode::CurrentPlayer.ReloadLatestTagsOnEnterPlaymode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Multiplayer::PlayMode::CurrentPlayer::ReloadLatestTagsOnEnterPlaymode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822edc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Multiplayer::PlayMode::CurrentPlayer*>(),
                        {"ReloadLatestTagsOnEnterPlaymode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Multiplayer::PlayMode::CurrentPlayer.ReadOnlyTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::Unity::Multiplayer::PlayMode::CurrentPlayer::ReadOnlyTags)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1822eda30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Multiplayer::PlayMode::CurrentPlayer*>(),
                        {"ReadOnlyTags", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Multiplayer::PlayMode::CurrentPlayer::setStaticF_s_CurrentPlayerApi(::Unity::Multiplayer::PlayMode::CurrentPlayerApi*  value)  {
::cordl_internals::setStaticField<::Unity::Multiplayer::PlayMode::CurrentPlayerApi*, "s_CurrentPlayerApi", ::Unity::Multiplayer::PlayMode::CurrentPlayer*>(std::forward<::Unity::Multiplayer::PlayMode::CurrentPlayerApi*>(value));
}
inline ::Unity::Multiplayer::PlayMode::CurrentPlayerApi* Unity::Multiplayer::PlayMode::CurrentPlayer::getStaticF_s_CurrentPlayerApi()  {
return ::cordl_internals::getStaticField<::Unity::Multiplayer::PlayMode::CurrentPlayerApi*, "s_CurrentPlayerApi", ::Unity::Multiplayer::PlayMode::CurrentPlayer*>();
}
inline void Unity::Multiplayer::PlayMode::CurrentPlayer::EnsureInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Multiplayer::PlayMode::CurrentPlayer*>(),
                        {"EnsureInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* Unity::Multiplayer::PlayMode::CurrentPlayer::get_Tags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Multiplayer::PlayMode::CurrentPlayer*>(),
                        {"get_Tags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(nullptr, ___internal_method);
}
inline void Unity::Multiplayer::PlayMode::CurrentPlayer::ReloadLatestTagsOnEnterPlaymode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Multiplayer::PlayMode::CurrentPlayer*>(),
                        {"ReloadLatestTagsOnEnterPlaymode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> Unity::Multiplayer::PlayMode::CurrentPlayer::ReadOnlyTags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Multiplayer::PlayMode::CurrentPlayer*>(),
                        {"ReadOnlyTags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Multiplayer::PlayMode::CurrentPlayer::CurrentPlayer()   {
}
