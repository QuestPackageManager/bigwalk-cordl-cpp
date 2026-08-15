#pragma once
// IWYU pragma private; include "Mirror/Examples/NetworkRoom/PlayerScore.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "Mirror/Examples/NetworkRoom/zzzz__PlayerScore_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::PlayerScore.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::PlayerScore::*)()>(&::Mirror::Examples::NetworkRoom::PlayerScore::OnGUI)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18155fc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::PlayerScore._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::PlayerScore::*)()>(&::Mirror::Examples::NetworkRoom::PlayerScore::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::PlayerScore.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::PlayerScore::*)()>(&::Mirror::Examples::NetworkRoom::PlayerScore::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::PlayerScore.get_Networkindex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::Examples::NetworkRoom::PlayerScore::*)()>(&::Mirror::Examples::NetworkRoom::PlayerScore::get_Networkindex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(),
                        {"get_Networkindex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::PlayerScore.set_Networkindex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::PlayerScore::*)(::ByRefConst<int32_t>)>(&::Mirror::Examples::NetworkRoom::PlayerScore::set_Networkindex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180426f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(),
                        {"set_Networkindex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::PlayerScore.get_Networkscore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Mirror::Examples::NetworkRoom::PlayerScore::*)()>(&::Mirror::Examples::NetworkRoom::PlayerScore::get_Networkscore)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803fa750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(),
                        {"get_Networkscore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::PlayerScore.set_Networkscore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::PlayerScore::*)(::ByRefConst<uint32_t>)>(&::Mirror::Examples::NetworkRoom::PlayerScore::set_Networkscore)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181560100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(),
                        {"set_Networkscore", {}, {::i2c::type_of<::ByRefConst<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::PlayerScore.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::PlayerScore::*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::Examples::NetworkRoom::PlayerScore::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18155ff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(),
                    {::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::NetworkRoom::PlayerScore.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::NetworkRoom::PlayerScore::*)(::Mirror::NetworkReader*, bool)>(&::Mirror::Examples::NetworkRoom::PlayerScore::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18155fb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(),
                    {::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::Examples::NetworkRoom::PlayerScore::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& Mirror::Examples::NetworkRoom::PlayerScore::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void Mirror::Examples::NetworkRoom::PlayerScore::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr uint32_t& Mirror::Examples::NetworkRoom::PlayerScore::__cordl_internal_get_score()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___score;
}
constexpr uint32_t const& Mirror::Examples::NetworkRoom::PlayerScore::__cordl_internal_get_score() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___score;
}
constexpr void Mirror::Examples::NetworkRoom::PlayerScore::__cordl_internal_set_score(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___score = value;
}
inline void Mirror::Examples::NetworkRoom::PlayerScore::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::NetworkRoom::PlayerScore::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::NetworkRoom::PlayerScore::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Mirror::Examples::NetworkRoom::PlayerScore::get_Networkindex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(),
                        {"get_Networkindex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mirror::Examples::NetworkRoom::PlayerScore::set_Networkindex(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(),
                        {"set_Networkindex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Mirror::Examples::NetworkRoom::PlayerScore::get_Networkscore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(),
                        {"get_Networkscore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Mirror::Examples::NetworkRoom::PlayerScore::set_Networkscore(::ByRefConst<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(),
                        {"set_Networkscore", {}, {::i2c::type_of<::ByRefConst<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Examples::NetworkRoom::PlayerScore::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void Mirror::Examples::NetworkRoom::PlayerScore::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::NetworkRoom::PlayerScore*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::Mirror::Examples::NetworkRoom::PlayerScore* Mirror::Examples::NetworkRoom::PlayerScore::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::NetworkRoom::PlayerScore*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::NetworkRoom::PlayerScore::PlayerScore()   {
}
