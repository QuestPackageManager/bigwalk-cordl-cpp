#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyEnviroNetworking.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LobbyEnviroNetworking_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LobbyEnviroNetworking.ConvertRealLifeSecondsToEnviroSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::GlobalNamespace::LobbyEnviroNetworking::ConvertRealLifeSecondsToEnviroSeconds)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804235a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"ConvertRealLifeSecondsToEnviroSeconds", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyEnviroNetworking.GetRealLifeSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::GlobalNamespace::LobbyEnviroNetworking::GetRealLifeSeconds)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180423720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"GetRealLifeSeconds", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyEnviroNetworking.OnStartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyEnviroNetworking::*)()>(&::GlobalNamespace::LobbyEnviroNetworking::OnStartClient)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180423780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                    {::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyEnviroNetworking.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyEnviroNetworking::*)()>(&::GlobalNamespace::LobbyEnviroNetworking::Update)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x180423850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyEnviroNetworking._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyEnviroNetworking::*)()>(&::GlobalNamespace::LobbyEnviroNetworking::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyEnviroNetworking.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyEnviroNetworking::*)()>(&::GlobalNamespace::LobbyEnviroNetworking::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyEnviroNetworking.get_NetworksyncTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::LobbyEnviroNetworking::*)()>(&::GlobalNamespace::LobbyEnviroNetworking::get_NetworksyncTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180403870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"get_NetworksyncTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyEnviroNetworking.set_NetworksyncTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyEnviroNetworking::*)(::ByRefConst<double_t>)>(&::GlobalNamespace::LobbyEnviroNetworking::set_NetworksyncTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180423e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"set_NetworksyncTime", {}, {::i2c::type_of<::ByRefConst<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyEnviroNetworking.get_NetworksyncDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::LobbyEnviroNetworking::*)()>(&::GlobalNamespace::LobbyEnviroNetworking::get_NetworksyncDate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"get_NetworksyncDate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyEnviroNetworking.set_NetworksyncDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyEnviroNetworking::*)(::ByRefConst<int64_t>)>(&::GlobalNamespace::LobbyEnviroNetworking::set_NetworksyncDate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180423db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"set_NetworksyncDate", {}, {::i2c::type_of<::ByRefConst<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyEnviroNetworking.get_NetworkisSimulating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LobbyEnviroNetworking::*)()>(&::GlobalNamespace::LobbyEnviroNetworking::get_NetworkisSimulating)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e56a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"get_NetworkisSimulating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyEnviroNetworking.set_NetworkisSimulating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyEnviroNetworking::*)(::ByRefConst<bool>)>(&::GlobalNamespace::LobbyEnviroNetworking::set_NetworkisSimulating)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180423d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"set_NetworkisSimulating", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyEnviroNetworking.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyEnviroNetworking::*)(::Mirror::NetworkWriter*, bool)>(&::GlobalNamespace::LobbyEnviroNetworking::SerializeSyncVars)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804237b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                    {::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyEnviroNetworking.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyEnviroNetworking::*)(::Mirror::NetworkReader*, bool)>(&::GlobalNamespace::LobbyEnviroNetworking::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180423600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                    {::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::LobbyEnviroNetworking::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::LobbyEnviroNetworking::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::LobbyEnviroNetworking::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr double_t& GlobalNamespace::LobbyEnviroNetworking::__cordl_internal_get_syncTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncTime;
}
constexpr double_t const& GlobalNamespace::LobbyEnviroNetworking::__cordl_internal_get_syncTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncTime;
}
constexpr void GlobalNamespace::LobbyEnviroNetworking::__cordl_internal_set_syncTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncTime = value;
}
constexpr int64_t& GlobalNamespace::LobbyEnviroNetworking::__cordl_internal_get_syncDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncDate;
}
constexpr int64_t const& GlobalNamespace::LobbyEnviroNetworking::__cordl_internal_get_syncDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncDate;
}
constexpr void GlobalNamespace::LobbyEnviroNetworking::__cordl_internal_set_syncDate(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncDate = value;
}
constexpr bool& GlobalNamespace::LobbyEnviroNetworking::__cordl_internal_get_isSimulating()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSimulating;
}
constexpr bool const& GlobalNamespace::LobbyEnviroNetworking::__cordl_internal_get_isSimulating() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSimulating;
}
constexpr void GlobalNamespace::LobbyEnviroNetworking::__cordl_internal_set_isSimulating(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSimulating = value;
}
inline double_t GlobalNamespace::LobbyEnviroNetworking::ConvertRealLifeSecondsToEnviroSeconds(double_t  realLifeSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"ConvertRealLifeSecondsToEnviroSeconds", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, realLifeSeconds);
}
inline double_t GlobalNamespace::LobbyEnviroNetworking::GetRealLifeSeconds(double_t  enviroSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"GetRealLifeSeconds", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, enviroSeconds);
}
inline void GlobalNamespace::LobbyEnviroNetworking::OnStartClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyEnviroNetworking::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyEnviroNetworking::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyEnviroNetworking::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline double_t GlobalNamespace::LobbyEnviroNetworking::get_NetworksyncTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"get_NetworksyncTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyEnviroNetworking::set_NetworksyncTime(::ByRefConst<double_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"set_NetworksyncTime", {}, {::i2c::type_of<::ByRefConst<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t GlobalNamespace::LobbyEnviroNetworking::get_NetworksyncDate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"get_NetworksyncDate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyEnviroNetworking::set_NetworksyncDate(::ByRefConst<int64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"set_NetworksyncDate", {}, {::i2c::type_of<::ByRefConst<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LobbyEnviroNetworking::get_NetworkisSimulating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"get_NetworkisSimulating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyEnviroNetworking::set_NetworkisSimulating(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(),
                        {"set_NetworkisSimulating", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyEnviroNetworking::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void GlobalNamespace::LobbyEnviroNetworking::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LobbyEnviroNetworking*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::GlobalNamespace::LobbyEnviroNetworking* GlobalNamespace::LobbyEnviroNetworking::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LobbyEnviroNetworking*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyEnviroNetworking::LobbyEnviroNetworking()   {
}
