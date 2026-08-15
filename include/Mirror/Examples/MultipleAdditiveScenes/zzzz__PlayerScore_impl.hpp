#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleAdditiveScenes/PlayerScore.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "Mirror/Examples/MultipleAdditiveScenes/zzzz__PlayerScore_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::PlayerScore.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::*)()>(&::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::OnGUI)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18155fcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::PlayerScore._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::*)()>(&::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18155ff70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::PlayerScore.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::*)()>(&::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::PlayerScore.get_NetworkplayerNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::*)()>(&::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::get_NetworkplayerNumber)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"get_NetworkplayerNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::PlayerScore.set_NetworkplayerNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::*)(::ByRefConst<int32_t>)>(&::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::set_NetworkplayerNumber)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180426f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"set_NetworkplayerNumber", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::PlayerScore.get_NetworkscoreIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::*)()>(&::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::get_NetworkscoreIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803fa750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"get_NetworkscoreIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::PlayerScore.set_NetworkscoreIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::*)(::ByRefConst<int32_t>)>(&::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::set_NetworkscoreIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181560000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"set_NetworkscoreIndex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::PlayerScore.get_NetworkmatchIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::*)()>(&::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::get_NetworkmatchIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803fa740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"get_NetworkmatchIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::PlayerScore.set_NetworkmatchIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::*)(::ByRefConst<int32_t>)>(&::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::set_NetworkmatchIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18155ff80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"set_NetworkmatchIndex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::PlayerScore.get_Networkscore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::*)()>(&::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::get_Networkscore)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"get_Networkscore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::PlayerScore.set_Networkscore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::*)(::ByRefConst<uint32_t>)>(&::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::set_Networkscore)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181560080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"set_Networkscore", {}, {::i2c::type_of<::ByRefConst<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::PlayerScore.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::SerializeSyncVars)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18155fe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                    {::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::MultipleAdditiveScenes::PlayerScore.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::*)(::Mirror::NetworkReader*, bool)>(&::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18155fa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                    {::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::Examples::MultipleAdditiveScenes::PlayerScore::__cordl_internal_get_playerNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNumber;
}
constexpr int32_t const& Mirror::Examples::MultipleAdditiveScenes::PlayerScore::__cordl_internal_get_playerNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNumber;
}
constexpr void Mirror::Examples::MultipleAdditiveScenes::PlayerScore::__cordl_internal_set_playerNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerNumber = value;
}
constexpr int32_t& Mirror::Examples::MultipleAdditiveScenes::PlayerScore::__cordl_internal_get_scoreIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreIndex;
}
constexpr int32_t const& Mirror::Examples::MultipleAdditiveScenes::PlayerScore::__cordl_internal_get_scoreIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreIndex;
}
constexpr void Mirror::Examples::MultipleAdditiveScenes::PlayerScore::__cordl_internal_set_scoreIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scoreIndex = value;
}
constexpr int32_t& Mirror::Examples::MultipleAdditiveScenes::PlayerScore::__cordl_internal_get_matchIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchIndex;
}
constexpr int32_t const& Mirror::Examples::MultipleAdditiveScenes::PlayerScore::__cordl_internal_get_matchIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchIndex;
}
constexpr void Mirror::Examples::MultipleAdditiveScenes::PlayerScore::__cordl_internal_set_matchIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchIndex = value;
}
constexpr uint32_t& Mirror::Examples::MultipleAdditiveScenes::PlayerScore::__cordl_internal_get_score()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___score;
}
constexpr uint32_t const& Mirror::Examples::MultipleAdditiveScenes::PlayerScore::__cordl_internal_get_score() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___score;
}
constexpr void Mirror::Examples::MultipleAdditiveScenes::PlayerScore::__cordl_internal_set_score(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___score = value;
}
constexpr int32_t& Mirror::Examples::MultipleAdditiveScenes::PlayerScore::__cordl_internal_get_clientMatchIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientMatchIndex;
}
constexpr int32_t const& Mirror::Examples::MultipleAdditiveScenes::PlayerScore::__cordl_internal_get_clientMatchIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientMatchIndex;
}
constexpr void Mirror::Examples::MultipleAdditiveScenes::PlayerScore::__cordl_internal_set_clientMatchIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientMatchIndex = value;
}
inline void Mirror::Examples::MultipleAdditiveScenes::PlayerScore::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleAdditiveScenes::PlayerScore::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleAdditiveScenes::PlayerScore::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Mirror::Examples::MultipleAdditiveScenes::PlayerScore::get_NetworkplayerNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"get_NetworkplayerNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleAdditiveScenes::PlayerScore::set_NetworkplayerNumber(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"set_NetworkplayerNumber", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Mirror::Examples::MultipleAdditiveScenes::PlayerScore::get_NetworkscoreIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"get_NetworkscoreIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleAdditiveScenes::PlayerScore::set_NetworkscoreIndex(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"set_NetworkscoreIndex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Mirror::Examples::MultipleAdditiveScenes::PlayerScore::get_NetworkmatchIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"get_NetworkmatchIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleAdditiveScenes::PlayerScore::set_NetworkmatchIndex(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"set_NetworkmatchIndex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Mirror::Examples::MultipleAdditiveScenes::PlayerScore::get_Networkscore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"get_Networkscore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Mirror::Examples::MultipleAdditiveScenes::PlayerScore::set_Networkscore(::ByRefConst<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(),
                        {"set_Networkscore", {}, {::i2c::type_of<::ByRefConst<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Examples::MultipleAdditiveScenes::PlayerScore::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void Mirror::Examples::MultipleAdditiveScenes::PlayerScore::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::Mirror::Examples::MultipleAdditiveScenes::PlayerScore* Mirror::Examples::MultipleAdditiveScenes::PlayerScore::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::MultipleAdditiveScenes::PlayerScore*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::MultipleAdditiveScenes::PlayerScore::PlayerScore()   {
}
