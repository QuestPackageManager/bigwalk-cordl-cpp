#pragma once
// IWYU pragma private; include "GlobalNamespace/StatusSetter.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StatusSetter_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StatusSetter.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StatusSetter::*)()>(&::GlobalNamespace::StatusSetter::Start)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1803f11d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StatusSetter.OnSessionClosedChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StatusSetter::*)(bool)>(&::GlobalNamespace::StatusSetter::OnSessionClosedChange)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803f0f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"OnSessionClosedChange", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StatusSetter.OnSetSessionIsClosed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StatusSetter::*)(bool, bool)>(&::GlobalNamespace::StatusSetter::OnSetSessionIsClosed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803f10a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"OnSetSessionIsClosed", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StatusSetter.OnSetWorldName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StatusSetter::*)(::StringW, ::StringW)>(&::GlobalNamespace::StatusSetter::OnSetWorldName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803f10e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"OnSetWorldName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StatusSetter.OnSetPreviousTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StatusSetter::*)(int32_t, int32_t)>(&::GlobalNamespace::StatusSetter::OnSetPreviousTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803f1070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"OnSetPreviousTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StatusSetter.RefreshStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StatusSetter::*)()>(&::GlobalNamespace::StatusSetter::RefreshStatus)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803f10a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"RefreshStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StatusSetter.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StatusSetter::*)()>(&::GlobalNamespace::StatusSetter::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f0f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StatusSetter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StatusSetter::*)()>(&::GlobalNamespace::StatusSetter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StatusSetter.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StatusSetter::*)()>(&::GlobalNamespace::StatusSetter::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StatusSetter.get_NetworksessionIsClosed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StatusSetter::*)()>(&::GlobalNamespace::StatusSetter::get_NetworksessionIsClosed)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180347a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"get_NetworksessionIsClosed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StatusSetter.set_NetworksessionIsClosed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StatusSetter::*)(::ByRefConst<bool>)>(&::GlobalNamespace::StatusSetter::set_NetworksessionIsClosed)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803f1500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"set_NetworksessionIsClosed", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StatusSetter.get_NetworkworldName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::StatusSetter::*)()>(&::GlobalNamespace::StatusSetter::get_NetworkworldName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"get_NetworkworldName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StatusSetter.set_NetworkworldName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StatusSetter::*)(::ByRefConst<::StringW>)>(&::GlobalNamespace::StatusSetter::set_NetworkworldName)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803f1610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"set_NetworkworldName", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StatusSetter.get_NetworkpreviousSessionTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::StatusSetter::*)()>(&::GlobalNamespace::StatusSetter::get_NetworkpreviousSessionTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803becf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"get_NetworkpreviousSessionTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StatusSetter.set_NetworkpreviousSessionTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StatusSetter::*)(::ByRefConst<int32_t>)>(&::GlobalNamespace::StatusSetter::set_NetworkpreviousSessionTime)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803f13f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"set_NetworkpreviousSessionTime", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StatusSetter.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StatusSetter::*)(::Mirror::NetworkWriter*, bool)>(&::GlobalNamespace::StatusSetter::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803f1140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                    {::i2c::class_of<::GlobalNamespace::StatusSetter*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StatusSetter.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StatusSetter::*)(::Mirror::NetworkReader*, bool)>(&::GlobalNamespace::StatusSetter::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1803f0c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                    {::i2c::class_of<::GlobalNamespace::StatusSetter*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::StatusSetter::__cordl_internal_get_sessionIsClosed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionIsClosed;
}
constexpr bool const& GlobalNamespace::StatusSetter::__cordl_internal_get_sessionIsClosed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionIsClosed;
}
constexpr void GlobalNamespace::StatusSetter::__cordl_internal_set_sessionIsClosed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sessionIsClosed = value;
}
constexpr ::StringW& GlobalNamespace::StatusSetter::__cordl_internal_get_worldName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldName;
}
constexpr ::StringW const& GlobalNamespace::StatusSetter::__cordl_internal_get_worldName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldName;
}
constexpr void GlobalNamespace::StatusSetter::__cordl_internal_set_worldName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldName = value;
}
constexpr int32_t& GlobalNamespace::StatusSetter::__cordl_internal_get_previousSessionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousSessionTime;
}
constexpr int32_t const& GlobalNamespace::StatusSetter::__cordl_internal_get_previousSessionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousSessionTime;
}
constexpr void GlobalNamespace::StatusSetter::__cordl_internal_set_previousSessionTime(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousSessionTime = value;
}
inline void GlobalNamespace::StatusSetter::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StatusSetter::OnSessionClosedChange(bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"OnSessionClosedChange", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::StatusSetter::OnSetSessionIsClosed(bool  oldValue, bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"OnSetSessionIsClosed", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::StatusSetter::OnSetWorldName(::StringW  oldValue, ::StringW  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"OnSetWorldName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::StatusSetter::OnSetPreviousTime(int32_t  oldValue, int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"OnSetPreviousTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::StatusSetter::RefreshStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"RefreshStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StatusSetter::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StatusSetter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StatusSetter::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::StatusSetter::get_NetworksessionIsClosed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"get_NetworksessionIsClosed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::StatusSetter::set_NetworksessionIsClosed(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"set_NetworksessionIsClosed", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::StatusSetter::get_NetworkworldName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"get_NetworkworldName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::StatusSetter::set_NetworkworldName(::ByRefConst<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"set_NetworkworldName", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::StatusSetter::get_NetworkpreviousSessionTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"get_NetworkpreviousSessionTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::StatusSetter::set_NetworkpreviousSessionTime(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StatusSetter*>(),
                        {"set_NetworkpreviousSessionTime", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StatusSetter::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StatusSetter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void GlobalNamespace::StatusSetter::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StatusSetter*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::GlobalNamespace::StatusSetter* GlobalNamespace::StatusSetter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StatusSetter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StatusSetter::StatusSetter()   {
}
