#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbySearch.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearch_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetails_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearchCopySearchResultByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearchFindOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearchGetSearchResultCountOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearchOnFindCallback_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearchRemoveParameterOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearchSetLobbyIdOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearchSetMaxResultsOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearchSetParameterOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearchSetTargetUserIdOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbySearch::*)()>(&::Epic::OnlineServices::Lobby::LobbySearch::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbySearch::*)(::System::IntPtr)>(&::Epic::OnlineServices::Lobby::LobbySearch::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearch.CopySearchResultByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbySearch::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions>, ::by_ref<::Epic::OnlineServices::Lobby::LobbyDetails*>)>(&::Epic::OnlineServices::Lobby::LobbySearch::CopySearchResultByIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18050b6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {"CopySearchResultByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetails*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearch.Find
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbySearch::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindOptions>, ::System::Object*, ::Epic::OnlineServices::Lobby::LobbySearchOnFindCallback*)>(&::Epic::OnlineServices::Lobby::LobbySearch::Find)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18050b760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {"Find", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Lobby::LobbySearchOnFindCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearch.GetSearchResultCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Lobby::LobbySearch::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchGetSearchResultCountOptions>)>(&::Epic::OnlineServices::Lobby::LobbySearch::GetSearchResultCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18050b960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {"GetSearchResultCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchGetSearchResultCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearch.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbySearch::*)()>(&::Epic::OnlineServices::Lobby::LobbySearch::Release)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18050b9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearch.RemoveParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbySearch::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchRemoveParameterOptions>)>(&::Epic::OnlineServices::Lobby::LobbySearch::RemoveParameter)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18050b9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {"RemoveParameter", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchRemoveParameterOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearch.SetLobbyId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbySearch::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetLobbyIdOptions>)>(&::Epic::OnlineServices::Lobby::LobbySearch::SetLobbyId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18050ba30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {"SetLobbyId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetLobbyIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearch.SetMaxResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbySearch::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptions>)>(&::Epic::OnlineServices::Lobby::LobbySearch::SetMaxResults)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18050baa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {"SetMaxResults", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearch.SetParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbySearch::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>)>(&::Epic::OnlineServices::Lobby::LobbySearch::SetParameter)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18050bae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {"SetParameter", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearch.SetTargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbySearch::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetTargetUserIdOptions>)>(&::Epic::OnlineServices::Lobby::LobbySearch::SetTargetUserId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18050bba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {"SetTargetUserId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetTargetUserIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::LobbySearch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::LobbySearch::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbySearch::CopySearchResultByIndex(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions>  options, ::by_ref<::Epic::OnlineServices::Lobby::LobbyDetails*>  outLobbyDetailsHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {"CopySearchResultByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetails*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outLobbyDetailsHandle);
}
inline void Epic::OnlineServices::Lobby::LobbySearch::Find(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::LobbySearchOnFindCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {"Find", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Lobby::LobbySearchOnFindCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline uint32_t Epic::OnlineServices::Lobby::LobbySearch::GetSearchResultCount(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchGetSearchResultCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {"GetSearchResultCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchGetSearchResultCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::Lobby::LobbySearch::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbySearch::RemoveParameter(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchRemoveParameterOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {"RemoveParameter", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchRemoveParameterOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbySearch::SetLobbyId(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetLobbyIdOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {"SetLobbyId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetLobbyIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbySearch::SetMaxResults(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {"SetMaxResults", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbySearch::SetParameter(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {"SetParameter", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbySearch::SetTargetUserId(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetTargetUserIdOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearch*>(),
                        {"SetTargetUserId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchSetTargetUserIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Lobby::LobbySearch* Epic::OnlineServices::Lobby::LobbySearch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Lobby::LobbySearch*>());
}
inline ::Epic::OnlineServices::Lobby::LobbySearch* Epic::OnlineServices::Lobby::LobbySearch::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Lobby::LobbySearch*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbySearch::LobbySearch()   {
}
