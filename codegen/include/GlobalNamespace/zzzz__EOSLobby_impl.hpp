#pragma once
// IWYU pragma private; include "GlobalNamespace/EOSLobby.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__AttributeData_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EOSLobby_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__AttributeData_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__Attribute_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__CreateLobbyCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__DestroyLobbyCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__JoinLobbyCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__KickMemberCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LeaveLobbyCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetails_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyMemberStatusReceivedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyPermissionLevel_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearchFindCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearchSetParameterOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearch_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyUpdateReceivedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__UpdateLobbyCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "GlobalNamespace/zzzz__EOSLobby_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_CreateLobbySuccess._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_CreateLobbySuccess::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::EOSLobby_CreateLobbySuccess::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803e3c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbySuccess*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_CreateLobbySuccess.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_CreateLobbySuccess::*)(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*)>(&::GlobalNamespace::EOSLobby_CreateLobbySuccess::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbySuccess*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbySuccess*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_CreateLobbySuccess.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::EOSLobby_CreateLobbySuccess::*)(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::EOSLobby_CreateLobbySuccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbySuccess*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbySuccess*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_CreateLobbySuccess.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_CreateLobbySuccess::*)(::System::IAsyncResult*)>(&::GlobalNamespace::EOSLobby_CreateLobbySuccess::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbySuccess*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbySuccess*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobby_CreateLobbySuccess::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbySuccess*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::EOSLobby_CreateLobbySuccess::Invoke(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  attributes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbySuccess*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline ::System::IAsyncResult* GlobalNamespace::EOSLobby_CreateLobbySuccess::BeginInvoke(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  attributes, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbySuccess*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, attributes, callback, object);
}
inline void GlobalNamespace::EOSLobby_CreateLobbySuccess::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbySuccess*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::EOSLobby_CreateLobbySuccess* GlobalNamespace::EOSLobby_CreateLobbySuccess::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby_CreateLobbySuccess*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby_CreateLobbySuccess::EOSLobby_CreateLobbySuccess()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_CreateLobbyFailure._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_CreateLobbyFailure::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::EOSLobby_CreateLobbyFailure::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805450a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbyFailure*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_CreateLobbyFailure.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_CreateLobbyFailure::*)(::StringW)>(&::GlobalNamespace::EOSLobby_CreateLobbyFailure::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbyFailure*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbyFailure*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_CreateLobbyFailure.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::EOSLobby_CreateLobbyFailure::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::EOSLobby_CreateLobbyFailure::BeginInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbyFailure*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbyFailure*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_CreateLobbyFailure.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_CreateLobbyFailure::*)(::System::IAsyncResult*)>(&::GlobalNamespace::EOSLobby_CreateLobbyFailure::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbyFailure*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbyFailure*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobby_CreateLobbyFailure::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbyFailure*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::EOSLobby_CreateLobbyFailure::Invoke(::StringW  errorMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbyFailure*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorMessage);
}
inline ::System::IAsyncResult* GlobalNamespace::EOSLobby_CreateLobbyFailure::BeginInvoke(::StringW  errorMessage, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbyFailure*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, errorMessage, callback, object);
}
inline void GlobalNamespace::EOSLobby_CreateLobbyFailure::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_CreateLobbyFailure*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::EOSLobby_CreateLobbyFailure* GlobalNamespace::EOSLobby_CreateLobbyFailure::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby_CreateLobbyFailure*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby_CreateLobbyFailure::EOSLobby_CreateLobbyFailure()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_JoinLobbySuccess._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_JoinLobbySuccess::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::EOSLobby_JoinLobbySuccess::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803e3c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbySuccess*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_JoinLobbySuccess.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_JoinLobbySuccess::*)(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*)>(&::GlobalNamespace::EOSLobby_JoinLobbySuccess::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbySuccess*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbySuccess*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_JoinLobbySuccess.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::EOSLobby_JoinLobbySuccess::*)(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::EOSLobby_JoinLobbySuccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbySuccess*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbySuccess*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_JoinLobbySuccess.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_JoinLobbySuccess::*)(::System::IAsyncResult*)>(&::GlobalNamespace::EOSLobby_JoinLobbySuccess::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbySuccess*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbySuccess*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobby_JoinLobbySuccess::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbySuccess*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::EOSLobby_JoinLobbySuccess::Invoke(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  attributes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbySuccess*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline ::System::IAsyncResult* GlobalNamespace::EOSLobby_JoinLobbySuccess::BeginInvoke(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  attributes, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbySuccess*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, attributes, callback, object);
}
inline void GlobalNamespace::EOSLobby_JoinLobbySuccess::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbySuccess*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::EOSLobby_JoinLobbySuccess* GlobalNamespace::EOSLobby_JoinLobbySuccess::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby_JoinLobbySuccess*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby_JoinLobbySuccess::EOSLobby_JoinLobbySuccess()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_JoinLobbyFailure._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_JoinLobbyFailure::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::EOSLobby_JoinLobbyFailure::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805450a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbyFailure*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_JoinLobbyFailure.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_JoinLobbyFailure::*)(::StringW)>(&::GlobalNamespace::EOSLobby_JoinLobbyFailure::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbyFailure*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbyFailure*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_JoinLobbyFailure.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::EOSLobby_JoinLobbyFailure::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::EOSLobby_JoinLobbyFailure::BeginInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbyFailure*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbyFailure*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_JoinLobbyFailure.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_JoinLobbyFailure::*)(::System::IAsyncResult*)>(&::GlobalNamespace::EOSLobby_JoinLobbyFailure::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbyFailure*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbyFailure*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobby_JoinLobbyFailure::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbyFailure*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::EOSLobby_JoinLobbyFailure::Invoke(::StringW  errorMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbyFailure*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorMessage);
}
inline ::System::IAsyncResult* GlobalNamespace::EOSLobby_JoinLobbyFailure::BeginInvoke(::StringW  errorMessage, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbyFailure*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, errorMessage, callback, object);
}
inline void GlobalNamespace::EOSLobby_JoinLobbyFailure::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_JoinLobbyFailure*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::EOSLobby_JoinLobbyFailure* GlobalNamespace::EOSLobby_JoinLobbyFailure::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby_JoinLobbyFailure*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby_JoinLobbyFailure::EOSLobby_JoinLobbyFailure()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_FindLobbiesSuccess._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_FindLobbiesSuccess::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::EOSLobby_FindLobbiesSuccess::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803e3c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesSuccess*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_FindLobbiesSuccess.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_FindLobbiesSuccess::*)(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*)>(&::GlobalNamespace::EOSLobby_FindLobbiesSuccess::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesSuccess*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesSuccess*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_FindLobbiesSuccess.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::EOSLobby_FindLobbiesSuccess::*)(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::EOSLobby_FindLobbiesSuccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesSuccess*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesSuccess*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_FindLobbiesSuccess.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_FindLobbiesSuccess::*)(::System::IAsyncResult*)>(&::GlobalNamespace::EOSLobby_FindLobbiesSuccess::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesSuccess*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesSuccess*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobby_FindLobbiesSuccess::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesSuccess*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::EOSLobby_FindLobbiesSuccess::Invoke(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*  foundLobbies)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesSuccess*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, foundLobbies);
}
inline ::System::IAsyncResult* GlobalNamespace::EOSLobby_FindLobbiesSuccess::BeginInvoke(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*  foundLobbies, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesSuccess*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, foundLobbies, callback, object);
}
inline void GlobalNamespace::EOSLobby_FindLobbiesSuccess::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesSuccess*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::EOSLobby_FindLobbiesSuccess* GlobalNamespace::EOSLobby_FindLobbiesSuccess::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby_FindLobbiesSuccess*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby_FindLobbiesSuccess::EOSLobby_FindLobbiesSuccess()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_FindLobbiesFailure._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_FindLobbiesFailure::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::EOSLobby_FindLobbiesFailure::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805450a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesFailure*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_FindLobbiesFailure.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_FindLobbiesFailure::*)(::StringW)>(&::GlobalNamespace::EOSLobby_FindLobbiesFailure::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesFailure*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesFailure*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_FindLobbiesFailure.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::EOSLobby_FindLobbiesFailure::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::EOSLobby_FindLobbiesFailure::BeginInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesFailure*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesFailure*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_FindLobbiesFailure.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_FindLobbiesFailure::*)(::System::IAsyncResult*)>(&::GlobalNamespace::EOSLobby_FindLobbiesFailure::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesFailure*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesFailure*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobby_FindLobbiesFailure::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesFailure*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::EOSLobby_FindLobbiesFailure::Invoke(::StringW  errorMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesFailure*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorMessage);
}
inline ::System::IAsyncResult* GlobalNamespace::EOSLobby_FindLobbiesFailure::BeginInvoke(::StringW  errorMessage, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesFailure*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, errorMessage, callback, object);
}
inline void GlobalNamespace::EOSLobby_FindLobbiesFailure::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_FindLobbiesFailure*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::EOSLobby_FindLobbiesFailure* GlobalNamespace::EOSLobby_FindLobbiesFailure::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby_FindLobbiesFailure*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby_FindLobbiesFailure::EOSLobby_FindLobbiesFailure()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_LeaveLobbySuccess._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_LeaveLobbySuccess::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::EOSLobby_LeaveLobbySuccess::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbySuccess*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_LeaveLobbySuccess.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_LeaveLobbySuccess::*)()>(&::GlobalNamespace::EOSLobby_LeaveLobbySuccess::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbySuccess*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbySuccess*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_LeaveLobbySuccess.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::EOSLobby_LeaveLobbySuccess::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::EOSLobby_LeaveLobbySuccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18057e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbySuccess*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbySuccess*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_LeaveLobbySuccess.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_LeaveLobbySuccess::*)(::System::IAsyncResult*)>(&::GlobalNamespace::EOSLobby_LeaveLobbySuccess::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbySuccess*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbySuccess*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobby_LeaveLobbySuccess::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbySuccess*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::EOSLobby_LeaveLobbySuccess::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbySuccess*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::EOSLobby_LeaveLobbySuccess::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbySuccess*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::EOSLobby_LeaveLobbySuccess::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbySuccess*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::EOSLobby_LeaveLobbySuccess* GlobalNamespace::EOSLobby_LeaveLobbySuccess::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby_LeaveLobbySuccess*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby_LeaveLobbySuccess::EOSLobby_LeaveLobbySuccess()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_LeaveLobbyFailure._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_LeaveLobbyFailure::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::EOSLobby_LeaveLobbyFailure::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805450a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbyFailure*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_LeaveLobbyFailure.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_LeaveLobbyFailure::*)(::StringW)>(&::GlobalNamespace::EOSLobby_LeaveLobbyFailure::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbyFailure*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbyFailure*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_LeaveLobbyFailure.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::EOSLobby_LeaveLobbyFailure::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::EOSLobby_LeaveLobbyFailure::BeginInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbyFailure*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbyFailure*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_LeaveLobbyFailure.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_LeaveLobbyFailure::*)(::System::IAsyncResult*)>(&::GlobalNamespace::EOSLobby_LeaveLobbyFailure::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbyFailure*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbyFailure*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobby_LeaveLobbyFailure::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbyFailure*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::EOSLobby_LeaveLobbyFailure::Invoke(::StringW  errorMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbyFailure*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorMessage);
}
inline ::System::IAsyncResult* GlobalNamespace::EOSLobby_LeaveLobbyFailure::BeginInvoke(::StringW  errorMessage, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbyFailure*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, errorMessage, callback, object);
}
inline void GlobalNamespace::EOSLobby_LeaveLobbyFailure::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_LeaveLobbyFailure*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::EOSLobby_LeaveLobbyFailure* GlobalNamespace::EOSLobby_LeaveLobbyFailure::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby_LeaveLobbyFailure*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby_LeaveLobbyFailure::EOSLobby_LeaveLobbyFailure()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_UpdateAttributeSuccess._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_UpdateAttributeSuccess::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::EOSLobby_UpdateAttributeSuccess::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805450a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_UpdateAttributeSuccess.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_UpdateAttributeSuccess::*)(::StringW)>(&::GlobalNamespace::EOSLobby_UpdateAttributeSuccess::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_UpdateAttributeSuccess.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::EOSLobby_UpdateAttributeSuccess::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::EOSLobby_UpdateAttributeSuccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_UpdateAttributeSuccess.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_UpdateAttributeSuccess::*)(::System::IAsyncResult*)>(&::GlobalNamespace::EOSLobby_UpdateAttributeSuccess::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobby_UpdateAttributeSuccess::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::EOSLobby_UpdateAttributeSuccess::Invoke(::StringW  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::System::IAsyncResult* GlobalNamespace::EOSLobby_UpdateAttributeSuccess::BeginInvoke(::StringW  key, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, key, callback, object);
}
inline void GlobalNamespace::EOSLobby_UpdateAttributeSuccess::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::EOSLobby_UpdateAttributeSuccess* GlobalNamespace::EOSLobby_UpdateAttributeSuccess::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby_UpdateAttributeSuccess::EOSLobby_UpdateAttributeSuccess()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_UpdateAttributeFailure._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_UpdateAttributeFailure::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::EOSLobby_UpdateAttributeFailure::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805827c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeFailure*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_UpdateAttributeFailure.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_UpdateAttributeFailure::*)(::StringW, ::StringW)>(&::GlobalNamespace::EOSLobby_UpdateAttributeFailure::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeFailure*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeFailure*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_UpdateAttributeFailure.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::EOSLobby_UpdateAttributeFailure::*)(::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::EOSLobby_UpdateAttributeFailure::BeginInvoke)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180582750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeFailure*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeFailure*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_UpdateAttributeFailure.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_UpdateAttributeFailure::*)(::System::IAsyncResult*)>(&::GlobalNamespace::EOSLobby_UpdateAttributeFailure::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeFailure*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeFailure*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobby_UpdateAttributeFailure::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeFailure*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::EOSLobby_UpdateAttributeFailure::Invoke(::StringW  key, ::StringW  errorMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeFailure*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, errorMessage);
}
inline ::System::IAsyncResult* GlobalNamespace::EOSLobby_UpdateAttributeFailure::BeginInvoke(::StringW  key, ::StringW  errorMessage, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeFailure*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, key, errorMessage, callback, object);
}
inline void GlobalNamespace::EOSLobby_UpdateAttributeFailure::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_UpdateAttributeFailure*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::EOSLobby_UpdateAttributeFailure* GlobalNamespace::EOSLobby_UpdateAttributeFailure::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby_UpdateAttributeFailure*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby_UpdateAttributeFailure::EOSLobby_UpdateAttributeFailure()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180542260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate::*)(::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo)>(&::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate::Invoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180542180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate::*)(::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050f650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate::Invoke(::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo  callback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline ::System::IAsyncResult* GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate::BeginInvoke(::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo  callback, ::System::AsyncCallback*  __callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, __callback, object);
}
inline void GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate* GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate::EOSLobby_LobbyMemberStatusUpdate()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_LobbyAttributeUpdate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_LobbyAttributeUpdate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::EOSLobby_LobbyAttributeUpdate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180eb2b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_LobbyAttributeUpdate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_LobbyAttributeUpdate::*)(::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo)>(&::GlobalNamespace::EOSLobby_LobbyAttributeUpdate::Invoke)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x180ccb9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_LobbyAttributeUpdate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::EOSLobby_LobbyAttributeUpdate::*)(::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::EOSLobby_LobbyAttributeUpdate::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby_LobbyAttributeUpdate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby_LobbyAttributeUpdate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::EOSLobby_LobbyAttributeUpdate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobby_LobbyAttributeUpdate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::EOSLobby_LobbyAttributeUpdate::Invoke(::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo  callback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline ::System::IAsyncResult* GlobalNamespace::EOSLobby_LobbyAttributeUpdate::BeginInvoke(::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo  callback, ::System::AsyncCallback*  __callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, __callback, object);
}
inline void GlobalNamespace::EOSLobby_LobbyAttributeUpdate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::EOSLobby_LobbyAttributeUpdate* GlobalNamespace::EOSLobby_LobbyAttributeUpdate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby_LobbyAttributeUpdate::EOSLobby_LobbyAttributeUpdate()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby___c__DisplayClass66_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby___c__DisplayClass66_0::*)()>(&::GlobalNamespace::EOSLobby___c__DisplayClass66_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass66_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby___c__DisplayClass66_0._CreateLobby_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby___c__DisplayClass66_0::*)(::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyCallbackInfo>)>(&::GlobalNamespace::EOSLobby___c__DisplayClass66_0::_CreateLobby_b__0)> {
  constexpr static std::size_t size = 0x9a0;
  constexpr static std::size_t addrs = 0x18157eb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass66_0*>(),
                        {"<CreateLobby>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::EOSLobby>& GlobalNamespace::EOSLobby___c__DisplayClass66_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EOSLobby> const& GlobalNamespace::EOSLobby___c__DisplayClass66_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::EOSLobby___c__DisplayClass66_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobby>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::ArrayW<::Epic::OnlineServices::Lobby::AttributeData>& GlobalNamespace::EOSLobby___c__DisplayClass66_0::__cordl_internal_get_lobbyData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyData;
}
constexpr ::ArrayW<::Epic::OnlineServices::Lobby::AttributeData> const& GlobalNamespace::EOSLobby___c__DisplayClass66_0::__cordl_internal_get_lobbyData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyData;
}
constexpr void GlobalNamespace::EOSLobby___c__DisplayClass66_0::__cordl_internal_set_lobbyData(::ArrayW<::Epic::OnlineServices::Lobby::AttributeData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbyData = value;
}
inline void GlobalNamespace::EOSLobby___c__DisplayClass66_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass66_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobby___c__DisplayClass66_0::_CreateLobby_b__0(::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyCallbackInfo>  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass66_0*>(),
                        {"<CreateLobby>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline ::GlobalNamespace::EOSLobby___c__DisplayClass66_0* GlobalNamespace::EOSLobby___c__DisplayClass66_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby___c__DisplayClass66_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby___c__DisplayClass66_0::EOSLobby___c__DisplayClass66_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby___c__DisplayClass66_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby___c__DisplayClass66_1::*)()>(&::GlobalNamespace::EOSLobby___c__DisplayClass66_1::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass66_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby___c__DisplayClass66_1._CreateLobby_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby___c__DisplayClass66_1::*)(::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>)>(&::GlobalNamespace::EOSLobby___c__DisplayClass66_1::_CreateLobby_b__1)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18157f4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass66_1*>(),
                        {"<CreateLobby>b__1", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Epic::OnlineServices::Utf8String*& GlobalNamespace::EOSLobby___c__DisplayClass66_1::__cordl_internal_get_lobbyId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyId;
}
constexpr ::Epic::OnlineServices::Utf8String* const& GlobalNamespace::EOSLobby___c__DisplayClass66_1::__cordl_internal_get_lobbyId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyId;
}
constexpr void GlobalNamespace::EOSLobby___c__DisplayClass66_1::__cordl_internal_set_lobbyId(::Epic::OnlineServices::Utf8String*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbyId = value;
}
constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*& GlobalNamespace::EOSLobby___c__DisplayClass66_1::__cordl_internal_get_lobbyReturnData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyReturnData;
}
constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>* const& GlobalNamespace::EOSLobby___c__DisplayClass66_1::__cordl_internal_get_lobbyReturnData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyReturnData;
}
constexpr void GlobalNamespace::EOSLobby___c__DisplayClass66_1::__cordl_internal_set_lobbyReturnData(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbyReturnData = value;
}
constexpr ::GlobalNamespace::EOSLobby___c__DisplayClass66_0*& GlobalNamespace::EOSLobby___c__DisplayClass66_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::GlobalNamespace::EOSLobby___c__DisplayClass66_0* const& GlobalNamespace::EOSLobby___c__DisplayClass66_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void GlobalNamespace::EOSLobby___c__DisplayClass66_1::__cordl_internal_set_CS$__8__locals1(::GlobalNamespace::EOSLobby___c__DisplayClass66_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void GlobalNamespace::EOSLobby___c__DisplayClass66_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass66_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobby___c__DisplayClass66_1::_CreateLobby_b__1(::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>  updateCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass66_1*>(),
                        {"<CreateLobby>b__1", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateCallback);
}
inline ::GlobalNamespace::EOSLobby___c__DisplayClass66_1* GlobalNamespace::EOSLobby___c__DisplayClass66_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby___c__DisplayClass66_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby___c__DisplayClass66_1::EOSLobby___c__DisplayClass66_1()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby___c__DisplayClass67_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby___c__DisplayClass67_0::*)()>(&::GlobalNamespace::EOSLobby___c__DisplayClass67_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass67_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby___c__DisplayClass67_0._FindLobbies_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby___c__DisplayClass67_0::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>)>(&::GlobalNamespace::EOSLobby___c__DisplayClass67_0::_FindLobbies_b__0)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18157f6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass67_0*>(),
                        {"<FindLobbies>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::EOSLobby>& GlobalNamespace::EOSLobby___c__DisplayClass67_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EOSLobby> const& GlobalNamespace::EOSLobby___c__DisplayClass67_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::EOSLobby___c__DisplayClass67_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobby>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Epic::OnlineServices::Lobby::LobbySearch*& GlobalNamespace::EOSLobby___c__DisplayClass67_0::__cordl_internal_get_search()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___search;
}
constexpr ::Epic::OnlineServices::Lobby::LobbySearch* const& GlobalNamespace::EOSLobby___c__DisplayClass67_0::__cordl_internal_get_search() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___search;
}
constexpr void GlobalNamespace::EOSLobby___c__DisplayClass67_0::__cordl_internal_set_search(::Epic::OnlineServices::Lobby::LobbySearch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___search = value;
}
inline void GlobalNamespace::EOSLobby___c__DisplayClass67_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass67_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobby___c__DisplayClass67_0::_FindLobbies_b__0(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass67_0*>(),
                        {"<FindLobbies>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline ::GlobalNamespace::EOSLobby___c__DisplayClass67_0* GlobalNamespace::EOSLobby___c__DisplayClass67_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby___c__DisplayClass67_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby___c__DisplayClass67_0::EOSLobby___c__DisplayClass67_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby___c__DisplayClass68_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby___c__DisplayClass68_0::*)()>(&::GlobalNamespace::EOSLobby___c__DisplayClass68_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass68_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby___c__DisplayClass68_0._JoinLobby_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby___c__DisplayClass68_0::*)(::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyCallbackInfo>)>(&::GlobalNamespace::EOSLobby___c__DisplayClass68_0::_JoinLobby_b__0)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x18157f8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass68_0*>(),
                        {"<JoinLobby>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::EOSLobby>& GlobalNamespace::EOSLobby___c__DisplayClass68_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EOSLobby> const& GlobalNamespace::EOSLobby___c__DisplayClass68_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::EOSLobby___c__DisplayClass68_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobby>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Epic::OnlineServices::Lobby::LobbyDetails*& GlobalNamespace::EOSLobby___c__DisplayClass68_0::__cordl_internal_get_lobbyToJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyToJoin;
}
constexpr ::Epic::OnlineServices::Lobby::LobbyDetails* const& GlobalNamespace::EOSLobby___c__DisplayClass68_0::__cordl_internal_get_lobbyToJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyToJoin;
}
constexpr void GlobalNamespace::EOSLobby___c__DisplayClass68_0::__cordl_internal_set_lobbyToJoin(::Epic::OnlineServices::Lobby::LobbyDetails*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbyToJoin = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::EOSLobby___c__DisplayClass68_0::__cordl_internal_get_attributeKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributeKeys;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::EOSLobby___c__DisplayClass68_0::__cordl_internal_get_attributeKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributeKeys;
}
constexpr void GlobalNamespace::EOSLobby___c__DisplayClass68_0::__cordl_internal_set_attributeKeys(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributeKeys = value;
}
inline void GlobalNamespace::EOSLobby___c__DisplayClass68_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass68_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobby___c__DisplayClass68_0::_JoinLobby_b__0(::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyCallbackInfo>  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass68_0*>(),
                        {"<JoinLobby>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline ::GlobalNamespace::EOSLobby___c__DisplayClass68_0* GlobalNamespace::EOSLobby___c__DisplayClass68_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby___c__DisplayClass68_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby___c__DisplayClass68_0::EOSLobby___c__DisplayClass68_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby___c__DisplayClass69_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby___c__DisplayClass69_0::*)()>(&::GlobalNamespace::EOSLobby___c__DisplayClass69_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass69_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby___c__DisplayClass69_0._JoinLobbyByID_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby___c__DisplayClass69_0::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>)>(&::GlobalNamespace::EOSLobby___c__DisplayClass69_0::_JoinLobbyByID_b__0)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18157fda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass69_0*>(),
                        {"<JoinLobbyByID>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::EOSLobby>& GlobalNamespace::EOSLobby___c__DisplayClass69_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EOSLobby> const& GlobalNamespace::EOSLobby___c__DisplayClass69_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::EOSLobby___c__DisplayClass69_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobby>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Epic::OnlineServices::Lobby::LobbySearch*& GlobalNamespace::EOSLobby___c__DisplayClass69_0::__cordl_internal_get_search()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___search;
}
constexpr ::Epic::OnlineServices::Lobby::LobbySearch* const& GlobalNamespace::EOSLobby___c__DisplayClass69_0::__cordl_internal_get_search() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___search;
}
constexpr void GlobalNamespace::EOSLobby___c__DisplayClass69_0::__cordl_internal_set_search(::Epic::OnlineServices::Lobby::LobbySearch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___search = value;
}
inline void GlobalNamespace::EOSLobby___c__DisplayClass69_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass69_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobby___c__DisplayClass69_0::_JoinLobbyByID_b__0(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass69_0*>(),
                        {"<JoinLobbyByID>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline ::GlobalNamespace::EOSLobby___c__DisplayClass69_0* GlobalNamespace::EOSLobby___c__DisplayClass69_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby___c__DisplayClass69_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby___c__DisplayClass69_0::EOSLobby___c__DisplayClass69_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby___c__DisplayClass71_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby___c__DisplayClass71_0::*)()>(&::GlobalNamespace::EOSLobby___c__DisplayClass71_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass71_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby___c__DisplayClass71_0._RemoveAttribute_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby___c__DisplayClass71_0::*)(::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>)>(&::GlobalNamespace::EOSLobby___c__DisplayClass71_0::_RemoveAttribute_b__0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18157ffc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass71_0*>(),
                        {"<RemoveAttribute>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::EOSLobby>& GlobalNamespace::EOSLobby___c__DisplayClass71_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EOSLobby> const& GlobalNamespace::EOSLobby___c__DisplayClass71_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::EOSLobby___c__DisplayClass71_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobby>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& GlobalNamespace::EOSLobby___c__DisplayClass71_0::__cordl_internal_get_key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr ::StringW const& GlobalNamespace::EOSLobby___c__DisplayClass71_0::__cordl_internal_get_key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr void GlobalNamespace::EOSLobby___c__DisplayClass71_0::__cordl_internal_set_key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___key = value;
}
inline void GlobalNamespace::EOSLobby___c__DisplayClass71_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass71_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobby___c__DisplayClass71_0::_RemoveAttribute_b__0(::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass71_0*>(),
                        {"<RemoveAttribute>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline ::GlobalNamespace::EOSLobby___c__DisplayClass71_0* GlobalNamespace::EOSLobby___c__DisplayClass71_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby___c__DisplayClass71_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby___c__DisplayClass71_0::EOSLobby___c__DisplayClass71_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby___c__DisplayClass72_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby___c__DisplayClass72_0::*)()>(&::GlobalNamespace::EOSLobby___c__DisplayClass72_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass72_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby___c__DisplayClass72_0._UpdateAttribute_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby___c__DisplayClass72_0::*)(::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>)>(&::GlobalNamespace::EOSLobby___c__DisplayClass72_0::_UpdateAttribute_b__0)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1815800a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass72_0*>(),
                        {"<UpdateAttribute>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::EOSLobby>& GlobalNamespace::EOSLobby___c__DisplayClass72_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EOSLobby> const& GlobalNamespace::EOSLobby___c__DisplayClass72_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::EOSLobby___c__DisplayClass72_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobby>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Epic::OnlineServices::Lobby::AttributeData& GlobalNamespace::EOSLobby___c__DisplayClass72_0::__cordl_internal_get_attribute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attribute;
}
constexpr ::Epic::OnlineServices::Lobby::AttributeData const& GlobalNamespace::EOSLobby___c__DisplayClass72_0::__cordl_internal_get_attribute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attribute;
}
constexpr void GlobalNamespace::EOSLobby___c__DisplayClass72_0::__cordl_internal_set_attribute(::Epic::OnlineServices::Lobby::AttributeData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attribute = value;
}
inline void GlobalNamespace::EOSLobby___c__DisplayClass72_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass72_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobby___c__DisplayClass72_0::_UpdateAttribute_b__0(::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass72_0*>(),
                        {"<UpdateAttribute>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline ::GlobalNamespace::EOSLobby___c__DisplayClass72_0* GlobalNamespace::EOSLobby___c__DisplayClass72_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby___c__DisplayClass72_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby___c__DisplayClass72_0::EOSLobby___c__DisplayClass72_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby___c__DisplayClass78_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby___c__DisplayClass78_0::*)()>(&::GlobalNamespace::EOSLobby___c__DisplayClass78_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass78_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby___c__DisplayClass78_0._KickMember_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby___c__DisplayClass78_0::*)(::by_ref<::Epic::OnlineServices::Lobby::KickMemberCallbackInfo>)>(&::GlobalNamespace::EOSLobby___c__DisplayClass78_0::_KickMember_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815801c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass78_0*>(),
                        {"<KickMember>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::KickMemberCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Epic::OnlineServices::ProductUserId*& GlobalNamespace::EOSLobby___c__DisplayClass78_0::__cordl_internal_get_pid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pid;
}
constexpr ::Epic::OnlineServices::ProductUserId* const& GlobalNamespace::EOSLobby___c__DisplayClass78_0::__cordl_internal_get_pid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pid;
}
constexpr void GlobalNamespace::EOSLobby___c__DisplayClass78_0::__cordl_internal_set_pid(::Epic::OnlineServices::ProductUserId*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pid = value;
}
constexpr bool& GlobalNamespace::EOSLobby___c__DisplayClass78_0::__cordl_internal_get_isBanning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBanning;
}
constexpr bool const& GlobalNamespace::EOSLobby___c__DisplayClass78_0::__cordl_internal_get_isBanning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBanning;
}
constexpr void GlobalNamespace::EOSLobby___c__DisplayClass78_0::__cordl_internal_set_isBanning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isBanning = value;
}
constexpr ::UnityW<::GlobalNamespace::EOSLobby>& GlobalNamespace::EOSLobby___c__DisplayClass78_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EOSLobby> const& GlobalNamespace::EOSLobby___c__DisplayClass78_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::EOSLobby___c__DisplayClass78_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobby>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::EOSLobby___c__DisplayClass78_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass78_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobby___c__DisplayClass78_0::_KickMember_b__0(::by_ref<::Epic::OnlineServices::Lobby::KickMemberCallbackInfo>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby___c__DisplayClass78_0*>(),
                        {"<KickMember>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::KickMemberCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::EOSLobby___c__DisplayClass78_0* GlobalNamespace::EOSLobby___c__DisplayClass78_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby___c__DisplayClass78_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby___c__DisplayClass78_0::EOSLobby___c__DisplayClass78_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.get_ConnectedToLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EOSLobby::*)()>(&::GlobalNamespace::EOSLobby::get_ConnectedToLobby)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"get_ConnectedToLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.set_ConnectedToLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(bool)>(&::GlobalNamespace::EOSLobby::set_ConnectedToLobby)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"set_ConnectedToLobby", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.get_ConnectedLobbyDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::LobbyDetails* (::GlobalNamespace::EOSLobby::*)()>(&::GlobalNamespace::EOSLobby::get_ConnectedLobbyDetails)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"get_ConnectedLobbyDetails", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.set_ConnectedLobbyDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::Epic::OnlineServices::Lobby::LobbyDetails*)>(&::GlobalNamespace::EOSLobby::set_ConnectedLobbyDetails)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"set_ConnectedLobbyDetails", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyDetails*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.add_CreateLobbySucceeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_CreateLobbySuccess*)>(&::GlobalNamespace::EOSLobby::add_CreateLobbySucceeded)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181571fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_CreateLobbySucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_CreateLobbySuccess*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.remove_CreateLobbySucceeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_CreateLobbySuccess*)>(&::GlobalNamespace::EOSLobby::remove_CreateLobbySucceeded)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181572610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_CreateLobbySucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_CreateLobbySuccess*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.add_CreateLobbyFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_CreateLobbyFailure*)>(&::GlobalNamespace::EOSLobby::add_CreateLobbyFailed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181571f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_CreateLobbyFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_CreateLobbyFailure*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.remove_CreateLobbyFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_CreateLobbyFailure*)>(&::GlobalNamespace::EOSLobby::remove_CreateLobbyFailed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181572590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_CreateLobbyFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_CreateLobbyFailure*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.add_JoinLobbySucceeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_JoinLobbySuccess*)>(&::GlobalNamespace::EOSLobby::add_JoinLobbySucceeded)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815721b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_JoinLobbySucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_JoinLobbySuccess*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.remove_JoinLobbySucceeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_JoinLobbySuccess*)>(&::GlobalNamespace::EOSLobby::remove_JoinLobbySucceeded)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181572820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_JoinLobbySucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_JoinLobbySuccess*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.add_JoinLobbyFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_JoinLobbyFailure*)>(&::GlobalNamespace::EOSLobby::add_JoinLobbyFailed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181572130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_JoinLobbyFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_JoinLobbyFailure*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.remove_JoinLobbyFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_JoinLobbyFailure*)>(&::GlobalNamespace::EOSLobby::remove_JoinLobbyFailed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815727a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_JoinLobbyFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_JoinLobbyFailure*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.add_FindLobbiesSucceeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_FindLobbiesSuccess*)>(&::GlobalNamespace::EOSLobby::add_FindLobbiesSucceeded)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815720b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_FindLobbiesSucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_FindLobbiesSuccess*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.remove_FindLobbiesSucceeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_FindLobbiesSuccess*)>(&::GlobalNamespace::EOSLobby::remove_FindLobbiesSucceeded)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181572720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_FindLobbiesSucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_FindLobbiesSuccess*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.add_FindLobbiesFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_FindLobbiesFailure*)>(&::GlobalNamespace::EOSLobby::add_FindLobbiesFailed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181572020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_FindLobbiesFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_FindLobbiesFailure*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.remove_FindLobbiesFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_FindLobbiesFailure*)>(&::GlobalNamespace::EOSLobby::remove_FindLobbiesFailed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181572690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_FindLobbiesFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_FindLobbiesFailure*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.add_LeaveLobbySucceeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_LeaveLobbySuccess*)>(&::GlobalNamespace::EOSLobby::add_LeaveLobbySucceeded)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815722c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_LeaveLobbySucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_LeaveLobbySuccess*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.remove_LeaveLobbySucceeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_LeaveLobbySuccess*)>(&::GlobalNamespace::EOSLobby::remove_LeaveLobbySucceeded)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181572930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_LeaveLobbySucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_LeaveLobbySuccess*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.add_LeaveLobbyFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_LeaveLobbyFailure*)>(&::GlobalNamespace::EOSLobby::add_LeaveLobbyFailed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181572230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_LeaveLobbyFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_LeaveLobbyFailure*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.remove_LeaveLobbyFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_LeaveLobbyFailure*)>(&::GlobalNamespace::EOSLobby::remove_LeaveLobbyFailed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815728a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_LeaveLobbyFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_LeaveLobbyFailure*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.add_AttributeUpdateSucceeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*)>(&::GlobalNamespace::EOSLobby::add_AttributeUpdateSucceeded)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181571e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_AttributeUpdateSucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.remove_AttributeUpdateSucceeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*)>(&::GlobalNamespace::EOSLobby::remove_AttributeUpdateSucceeded)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181572500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_AttributeUpdateSucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.add_AttributeUpdateFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_UpdateAttributeFailure*)>(&::GlobalNamespace::EOSLobby::add_AttributeUpdateFailed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181571e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_AttributeUpdateFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_UpdateAttributeFailure*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.remove_AttributeUpdateFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_UpdateAttributeFailure*)>(&::GlobalNamespace::EOSLobby::remove_AttributeUpdateFailed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181572470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_AttributeUpdateFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_UpdateAttributeFailure*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.add_LobbyMemberStatusUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*)>(&::GlobalNamespace::EOSLobby::add_LobbyMemberStatusUpdated)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815723e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_LobbyMemberStatusUpdated", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.remove_LobbyMemberStatusUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*)>(&::GlobalNamespace::EOSLobby::remove_LobbyMemberStatusUpdated)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181572a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_LobbyMemberStatusUpdated", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.add_LobbyAttributeUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*)>(&::GlobalNamespace::EOSLobby::add_LobbyAttributeUpdated)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181572350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_LobbyAttributeUpdated", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.remove_LobbyAttributeUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*)>(&::GlobalNamespace::EOSLobby::remove_LobbyAttributeUpdated)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815729c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_LobbyAttributeUpdated", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)()>(&::GlobalNamespace::EOSLobby::Start)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181571380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.CreateLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(uint32_t, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel, bool, ::ArrayW<::Epic::OnlineServices::Lobby::AttributeData>)>(&::GlobalNamespace::EOSLobby::CreateLobby)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1815704b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.FindLobbies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(uint32_t, ::ArrayW<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>)>(&::GlobalNamespace::EOSLobby::FindLobbies)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x181570690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.JoinLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::Epic::OnlineServices::Lobby::LobbyDetails*, ::ArrayW<::StringW>, bool)>(&::GlobalNamespace::EOSLobby::JoinLobby)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181570b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.JoinLobbyByID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::StringW)>(&::GlobalNamespace::EOSLobby::JoinLobbyByID)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1815709e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.LeaveLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)()>(&::GlobalNamespace::EOSLobby::LeaveLobby)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x181570f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.RemoveAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::StringW)>(&::GlobalNamespace::EOSLobby::RemoveAttribute)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181571190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                    {::i2c::class_of<::GlobalNamespace::EOSLobby*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.UpdateAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::Epic::OnlineServices::Lobby::AttributeData)>(&::GlobalNamespace::EOSLobby::UpdateAttribute)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1815716b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"UpdateAttribute", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::AttributeData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.UpdateLobbyAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::StringW, bool)>(&::GlobalNamespace::EOSLobby::UpdateLobbyAttribute)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181571c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"UpdateLobbyAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.UpdateLobbyAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::StringW, int32_t)>(&::GlobalNamespace::EOSLobby::UpdateLobbyAttribute)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181571970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"UpdateLobbyAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.UpdateLobbyAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::StringW, double_t)>(&::GlobalNamespace::EOSLobby::UpdateLobbyAttribute)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181571b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"UpdateLobbyAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.UpdateLobbyAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::StringW, ::StringW)>(&::GlobalNamespace::EOSLobby::UpdateLobbyAttribute)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181571a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"UpdateLobbyAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.GetCurrentLobbyId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::EOSLobby::*)()>(&::GlobalNamespace::EOSLobby::GetCurrentLobbyId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"GetCurrentLobbyId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby.KickMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::Epic::OnlineServices::ProductUserId*, bool)>(&::GlobalNamespace::EOSLobby::KickMember)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181570d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"KickMember", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)()>(&::GlobalNamespace::EOSLobby::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181571d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby._Start_b__65_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo>)>(&::GlobalNamespace::EOSLobby::_Start_b__65_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1815715d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"<Start>b__65_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby._Start_b__65_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo>)>(&::GlobalNamespace::EOSLobby::_Start_b__65_1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181571680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"<Start>b__65_1", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby._LeaveLobby_b__70_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>)>(&::GlobalNamespace::EOSLobby::_LeaveLobby_b__70_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181571490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"<LeaveLobby>b__70_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobby._LeaveLobby_b__70_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobby::*)(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfo>)>(&::GlobalNamespace::EOSLobby::_LeaveLobby_b__70_1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181571530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"<LeaveLobby>b__70_1", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::EOSLobby::__cordl_internal_get__ConnectedToLobby_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConnectedToLobby_k__BackingField;
}
constexpr bool const& GlobalNamespace::EOSLobby::__cordl_internal_get__ConnectedToLobby_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConnectedToLobby_k__BackingField;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set__ConnectedToLobby_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ConnectedToLobby_k__BackingField = value;
}
constexpr ::Epic::OnlineServices::Lobby::LobbyDetails*& GlobalNamespace::EOSLobby::__cordl_internal_get__ConnectedLobbyDetails_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConnectedLobbyDetails_k__BackingField;
}
constexpr ::Epic::OnlineServices::Lobby::LobbyDetails* const& GlobalNamespace::EOSLobby::__cordl_internal_get__ConnectedLobbyDetails_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConnectedLobbyDetails_k__BackingField;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set__ConnectedLobbyDetails_k__BackingField(::Epic::OnlineServices::Lobby::LobbyDetails*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ConnectedLobbyDetails_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::EOSLobby::__cordl_internal_get_currentLobbyId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLobbyId;
}
constexpr ::StringW const& GlobalNamespace::EOSLobby::__cordl_internal_get_currentLobbyId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLobbyId;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set_currentLobbyId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentLobbyId = value;
}
constexpr bool& GlobalNamespace::EOSLobby::__cordl_internal_get_isLobbyOwner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLobbyOwner;
}
constexpr bool const& GlobalNamespace::EOSLobby::__cordl_internal_get_isLobbyOwner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLobbyOwner;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set_isLobbyOwner(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLobbyOwner = value;
}
constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*& GlobalNamespace::EOSLobby::__cordl_internal_get_foundLobbies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foundLobbies;
}
constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>* const& GlobalNamespace::EOSLobby::__cordl_internal_get_foundLobbies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foundLobbies;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set_foundLobbies(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___foundLobbies = value;
}
constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*& GlobalNamespace::EOSLobby::__cordl_internal_get_lobbyData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyData;
}
constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>* const& GlobalNamespace::EOSLobby::__cordl_internal_get_lobbyData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyData;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set_lobbyData(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbyData = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Epic::OnlineServices::ProductUserId*>*& GlobalNamespace::EOSLobby::__cordl_internal_get_listOfBannedPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listOfBannedPlayers;
}
constexpr ::System::Collections::Generic::HashSet_1<::Epic::OnlineServices::ProductUserId*>* const& GlobalNamespace::EOSLobby::__cordl_internal_get_listOfBannedPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listOfBannedPlayers;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set_listOfBannedPlayers(::System::Collections::Generic::HashSet_1<::Epic::OnlineServices::ProductUserId*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listOfBannedPlayers = value;
}
constexpr ::GlobalNamespace::EOSLobby_CreateLobbySuccess*& GlobalNamespace::EOSLobby::__cordl_internal_get_CreateLobbySucceeded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateLobbySucceeded;
}
constexpr ::GlobalNamespace::EOSLobby_CreateLobbySuccess* const& GlobalNamespace::EOSLobby::__cordl_internal_get_CreateLobbySucceeded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateLobbySucceeded;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set_CreateLobbySucceeded(::GlobalNamespace::EOSLobby_CreateLobbySuccess*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreateLobbySucceeded = value;
}
constexpr ::GlobalNamespace::EOSLobby_CreateLobbyFailure*& GlobalNamespace::EOSLobby::__cordl_internal_get_CreateLobbyFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateLobbyFailed;
}
constexpr ::GlobalNamespace::EOSLobby_CreateLobbyFailure* const& GlobalNamespace::EOSLobby::__cordl_internal_get_CreateLobbyFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateLobbyFailed;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set_CreateLobbyFailed(::GlobalNamespace::EOSLobby_CreateLobbyFailure*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreateLobbyFailed = value;
}
constexpr ::GlobalNamespace::EOSLobby_JoinLobbySuccess*& GlobalNamespace::EOSLobby::__cordl_internal_get_JoinLobbySucceeded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinLobbySucceeded;
}
constexpr ::GlobalNamespace::EOSLobby_JoinLobbySuccess* const& GlobalNamespace::EOSLobby::__cordl_internal_get_JoinLobbySucceeded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinLobbySucceeded;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set_JoinLobbySucceeded(::GlobalNamespace::EOSLobby_JoinLobbySuccess*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JoinLobbySucceeded = value;
}
constexpr ::GlobalNamespace::EOSLobby_JoinLobbyFailure*& GlobalNamespace::EOSLobby::__cordl_internal_get_JoinLobbyFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinLobbyFailed;
}
constexpr ::GlobalNamespace::EOSLobby_JoinLobbyFailure* const& GlobalNamespace::EOSLobby::__cordl_internal_get_JoinLobbyFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinLobbyFailed;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set_JoinLobbyFailed(::GlobalNamespace::EOSLobby_JoinLobbyFailure*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JoinLobbyFailed = value;
}
constexpr ::GlobalNamespace::EOSLobby_FindLobbiesSuccess*& GlobalNamespace::EOSLobby::__cordl_internal_get_FindLobbiesSucceeded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FindLobbiesSucceeded;
}
constexpr ::GlobalNamespace::EOSLobby_FindLobbiesSuccess* const& GlobalNamespace::EOSLobby::__cordl_internal_get_FindLobbiesSucceeded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FindLobbiesSucceeded;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set_FindLobbiesSucceeded(::GlobalNamespace::EOSLobby_FindLobbiesSuccess*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FindLobbiesSucceeded = value;
}
constexpr ::GlobalNamespace::EOSLobby_FindLobbiesFailure*& GlobalNamespace::EOSLobby::__cordl_internal_get_FindLobbiesFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FindLobbiesFailed;
}
constexpr ::GlobalNamespace::EOSLobby_FindLobbiesFailure* const& GlobalNamespace::EOSLobby::__cordl_internal_get_FindLobbiesFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FindLobbiesFailed;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set_FindLobbiesFailed(::GlobalNamespace::EOSLobby_FindLobbiesFailure*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FindLobbiesFailed = value;
}
constexpr ::GlobalNamespace::EOSLobby_LeaveLobbySuccess*& GlobalNamespace::EOSLobby::__cordl_internal_get_LeaveLobbySucceeded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeaveLobbySucceeded;
}
constexpr ::GlobalNamespace::EOSLobby_LeaveLobbySuccess* const& GlobalNamespace::EOSLobby::__cordl_internal_get_LeaveLobbySucceeded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeaveLobbySucceeded;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set_LeaveLobbySucceeded(::GlobalNamespace::EOSLobby_LeaveLobbySuccess*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LeaveLobbySucceeded = value;
}
constexpr ::GlobalNamespace::EOSLobby_LeaveLobbyFailure*& GlobalNamespace::EOSLobby::__cordl_internal_get_LeaveLobbyFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeaveLobbyFailed;
}
constexpr ::GlobalNamespace::EOSLobby_LeaveLobbyFailure* const& GlobalNamespace::EOSLobby::__cordl_internal_get_LeaveLobbyFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeaveLobbyFailed;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set_LeaveLobbyFailed(::GlobalNamespace::EOSLobby_LeaveLobbyFailure*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LeaveLobbyFailed = value;
}
constexpr ::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*& GlobalNamespace::EOSLobby::__cordl_internal_get_AttributeUpdateSucceeded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttributeUpdateSucceeded;
}
constexpr ::GlobalNamespace::EOSLobby_UpdateAttributeSuccess* const& GlobalNamespace::EOSLobby::__cordl_internal_get_AttributeUpdateSucceeded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttributeUpdateSucceeded;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set_AttributeUpdateSucceeded(::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AttributeUpdateSucceeded = value;
}
constexpr ::GlobalNamespace::EOSLobby_UpdateAttributeFailure*& GlobalNamespace::EOSLobby::__cordl_internal_get_AttributeUpdateFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttributeUpdateFailed;
}
constexpr ::GlobalNamespace::EOSLobby_UpdateAttributeFailure* const& GlobalNamespace::EOSLobby::__cordl_internal_get_AttributeUpdateFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttributeUpdateFailed;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set_AttributeUpdateFailed(::GlobalNamespace::EOSLobby_UpdateAttributeFailure*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AttributeUpdateFailed = value;
}
constexpr uint64_t& GlobalNamespace::EOSLobby::__cordl_internal_get_lobbyMemberStatusNotifyId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyMemberStatusNotifyId;
}
constexpr uint64_t const& GlobalNamespace::EOSLobby::__cordl_internal_get_lobbyMemberStatusNotifyId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyMemberStatusNotifyId;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set_lobbyMemberStatusNotifyId(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbyMemberStatusNotifyId = value;
}
constexpr uint64_t& GlobalNamespace::EOSLobby::__cordl_internal_get_lobbyAttributeUpdateNotifyId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyAttributeUpdateNotifyId;
}
constexpr uint64_t const& GlobalNamespace::EOSLobby::__cordl_internal_get_lobbyAttributeUpdateNotifyId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyAttributeUpdateNotifyId;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set_lobbyAttributeUpdateNotifyId(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbyAttributeUpdateNotifyId = value;
}
constexpr ::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*& GlobalNamespace::EOSLobby::__cordl_internal_get_LobbyMemberStatusUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyMemberStatusUpdated;
}
constexpr ::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate* const& GlobalNamespace::EOSLobby::__cordl_internal_get_LobbyMemberStatusUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyMemberStatusUpdated;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set_LobbyMemberStatusUpdated(::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LobbyMemberStatusUpdated = value;
}
constexpr ::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*& GlobalNamespace::EOSLobby::__cordl_internal_get_LobbyAttributeUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyAttributeUpdated;
}
constexpr ::GlobalNamespace::EOSLobby_LobbyAttributeUpdate* const& GlobalNamespace::EOSLobby::__cordl_internal_get_LobbyAttributeUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyAttributeUpdated;
}
constexpr void GlobalNamespace::EOSLobby::__cordl_internal_set_LobbyAttributeUpdated(::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LobbyAttributeUpdated = value;
}
inline bool GlobalNamespace::EOSLobby::get_ConnectedToLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"get_ConnectedToLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobby::set_ConnectedToLobby(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"set_ConnectedToLobby", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Lobby::LobbyDetails* GlobalNamespace::EOSLobby::get_ConnectedLobbyDetails()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"get_ConnectedLobbyDetails", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::LobbyDetails*>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobby::set_ConnectedLobbyDetails(::Epic::OnlineServices::Lobby::LobbyDetails*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"set_ConnectedLobbyDetails", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyDetails*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::add_CreateLobbySucceeded(::GlobalNamespace::EOSLobby_CreateLobbySuccess*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_CreateLobbySucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_CreateLobbySuccess*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::remove_CreateLobbySucceeded(::GlobalNamespace::EOSLobby_CreateLobbySuccess*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_CreateLobbySucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_CreateLobbySuccess*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::add_CreateLobbyFailed(::GlobalNamespace::EOSLobby_CreateLobbyFailure*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_CreateLobbyFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_CreateLobbyFailure*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::remove_CreateLobbyFailed(::GlobalNamespace::EOSLobby_CreateLobbyFailure*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_CreateLobbyFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_CreateLobbyFailure*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::add_JoinLobbySucceeded(::GlobalNamespace::EOSLobby_JoinLobbySuccess*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_JoinLobbySucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_JoinLobbySuccess*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::remove_JoinLobbySucceeded(::GlobalNamespace::EOSLobby_JoinLobbySuccess*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_JoinLobbySucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_JoinLobbySuccess*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::add_JoinLobbyFailed(::GlobalNamespace::EOSLobby_JoinLobbyFailure*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_JoinLobbyFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_JoinLobbyFailure*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::remove_JoinLobbyFailed(::GlobalNamespace::EOSLobby_JoinLobbyFailure*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_JoinLobbyFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_JoinLobbyFailure*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::add_FindLobbiesSucceeded(::GlobalNamespace::EOSLobby_FindLobbiesSuccess*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_FindLobbiesSucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_FindLobbiesSuccess*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::remove_FindLobbiesSucceeded(::GlobalNamespace::EOSLobby_FindLobbiesSuccess*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_FindLobbiesSucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_FindLobbiesSuccess*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::add_FindLobbiesFailed(::GlobalNamespace::EOSLobby_FindLobbiesFailure*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_FindLobbiesFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_FindLobbiesFailure*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::remove_FindLobbiesFailed(::GlobalNamespace::EOSLobby_FindLobbiesFailure*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_FindLobbiesFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_FindLobbiesFailure*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::add_LeaveLobbySucceeded(::GlobalNamespace::EOSLobby_LeaveLobbySuccess*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_LeaveLobbySucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_LeaveLobbySuccess*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::remove_LeaveLobbySucceeded(::GlobalNamespace::EOSLobby_LeaveLobbySuccess*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_LeaveLobbySucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_LeaveLobbySuccess*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::add_LeaveLobbyFailed(::GlobalNamespace::EOSLobby_LeaveLobbyFailure*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_LeaveLobbyFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_LeaveLobbyFailure*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::remove_LeaveLobbyFailed(::GlobalNamespace::EOSLobby_LeaveLobbyFailure*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_LeaveLobbyFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_LeaveLobbyFailure*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::add_AttributeUpdateSucceeded(::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_AttributeUpdateSucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::remove_AttributeUpdateSucceeded(::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_AttributeUpdateSucceeded", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::add_AttributeUpdateFailed(::GlobalNamespace::EOSLobby_UpdateAttributeFailure*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_AttributeUpdateFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_UpdateAttributeFailure*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::remove_AttributeUpdateFailed(::GlobalNamespace::EOSLobby_UpdateAttributeFailure*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_AttributeUpdateFailed", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_UpdateAttributeFailure*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::add_LobbyMemberStatusUpdated(::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_LobbyMemberStatusUpdated", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::remove_LobbyMemberStatusUpdated(::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_LobbyMemberStatusUpdated", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::add_LobbyAttributeUpdated(::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"add_LobbyAttributeUpdated", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::remove_LobbyAttributeUpdated(::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"remove_LobbyAttributeUpdated", {}, {::i2c::type_of<::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EOSLobby::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobby::CreateLobby(uint32_t  maxConnections, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  permissionLevel, bool  presenceEnabled, ::ArrayW<::Epic::OnlineServices::Lobby::AttributeData>  lobbyData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxConnections, permissionLevel, presenceEnabled, lobbyData);
}
inline void GlobalNamespace::EOSLobby::FindLobbies(uint32_t  maxResults, ::ArrayW<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>  lobbySearchSetParameterOptions)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxResults, lobbySearchSetParameterOptions);
}
inline void GlobalNamespace::EOSLobby::JoinLobby(::Epic::OnlineServices::Lobby::LobbyDetails*  lobbyToJoin, ::ArrayW<::StringW>  attributeKeys, bool  presenceEnabled)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbyToJoin, attributeKeys, presenceEnabled);
}
inline void GlobalNamespace::EOSLobby::JoinLobbyByID(::StringW  lobbyID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbyID);
}
inline void GlobalNamespace::EOSLobby::LeaveLobby()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobby::RemoveAttribute(::StringW  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::EOSLobby*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void GlobalNamespace::EOSLobby::UpdateAttribute(::Epic::OnlineServices::Lobby::AttributeData  attribute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"UpdateAttribute", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::AttributeData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attribute);
}
inline void GlobalNamespace::EOSLobby::UpdateLobbyAttribute(::StringW  key, bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"UpdateLobbyAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, newValue);
}
inline void GlobalNamespace::EOSLobby::UpdateLobbyAttribute(::StringW  key, int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"UpdateLobbyAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, newValue);
}
inline void GlobalNamespace::EOSLobby::UpdateLobbyAttribute(::StringW  key, double_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"UpdateLobbyAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, newValue);
}
inline void GlobalNamespace::EOSLobby::UpdateLobbyAttribute(::StringW  key, ::StringW  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"UpdateLobbyAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, newValue);
}
inline ::StringW GlobalNamespace::EOSLobby::GetCurrentLobbyId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"GetCurrentLobbyId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobby::KickMember(::Epic::OnlineServices::ProductUserId*  pid, bool  isBanning)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"KickMember", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pid, isBanning);
}
inline void GlobalNamespace::EOSLobby::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobby::_Start_b__65_0(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"<Start>b__65_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::EOSLobby::_Start_b__65_1(::by_ref<::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo>  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"<Start>b__65_1", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::EOSLobby::_LeaveLobby_b__70_0(::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"<LeaveLobby>b__70_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::EOSLobby::_LeaveLobby_b__70_1(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfo>  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobby*>(),
                        {"<LeaveLobby>b__70_1", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline ::GlobalNamespace::EOSLobby* GlobalNamespace::EOSLobby::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobby*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobby::EOSLobby()   {
}
