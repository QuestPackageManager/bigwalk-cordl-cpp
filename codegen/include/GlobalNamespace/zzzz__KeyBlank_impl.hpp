#pragma once
// IWYU pragma private; include "GlobalNamespace/KeyBlank.hpp"
#include "GlobalNamespace/zzzz__KeyBlankCover_impl.hpp"
#include "GlobalNamespace/zzzz__PropGroup_impl.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KeyBlank_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "Mirror/zzzz__SyncList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KeyBlank.OnStartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyBlank::*)()>(&::GlobalNamespace::KeyBlank::OnStartClient)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x18040a1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KeyBlank*>(),
                    {::i2c::class_of<::GlobalNamespace::KeyBlank*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyBlank.OnBite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyBlank::*)(int32_t)>(&::GlobalNamespace::KeyBlank::OnBite)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18040a030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyBlank*>(),
                        {"OnBite", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyBlank.OnPinUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyBlank::*)()>(&::GlobalNamespace::KeyBlank::OnPinUpdated)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18040a120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyBlank*>(),
                        {"OnPinUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyBlank.ServerCutSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyBlank::*)(int32_t)>(&::GlobalNamespace::KeyBlank::ServerCutSegment)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18040a5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyBlank*>(),
                        {"ServerCutSegment", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyBlank.OnCutsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyBlank::*)(::Mirror::SyncList_1_Operation<bool>, int32_t, bool, bool)>(&::GlobalNamespace::KeyBlank::OnCutsUpdated)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18040a0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyBlank*>(),
                        {"OnCutsUpdated", {}, {::i2c::type_of<::Mirror::SyncList_1_Operation<bool>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyBlank.RefreshPropGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyBlank::*)()>(&::GlobalNamespace::KeyBlank::RefreshPropGroup)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18040a4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyBlank*>(),
                        {"RefreshPropGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyBlank._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyBlank::*)()>(&::GlobalNamespace::KeyBlank::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18040a5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyBlank*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyBlank.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyBlank::*)()>(&::GlobalNamespace::KeyBlank::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyBlank*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mirror::SyncList_1<bool>*& GlobalNamespace::KeyBlank::__cordl_internal_get_cuts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cuts;
}
constexpr ::Mirror::SyncList_1<bool>* const& GlobalNamespace::KeyBlank::__cordl_internal_get_cuts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cuts;
}
constexpr void GlobalNamespace::KeyBlank::__cordl_internal_set_cuts(::Mirror::SyncList_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cuts = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::KeyBlankCover>>& GlobalNamespace::KeyBlank::__cordl_internal_get_covers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___covers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::KeyBlankCover>> const& GlobalNamespace::KeyBlank::__cordl_internal_get_covers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___covers;
}
constexpr void GlobalNamespace::KeyBlank::__cordl_internal_set_covers(::ArrayW<::UnityW<::GlobalNamespace::KeyBlankCover>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___covers = value;
}
constexpr ::UnityW<::GlobalNamespace::Prop>& GlobalNamespace::KeyBlank::__cordl_internal_get_prop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prop;
}
constexpr ::UnityW<::GlobalNamespace::Prop> const& GlobalNamespace::KeyBlank::__cordl_internal_get_prop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prop;
}
constexpr void GlobalNamespace::KeyBlank::__cordl_internal_set_prop(::UnityW<::GlobalNamespace::Prop>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prop = value;
}
constexpr ::GlobalNamespace::PropGroup& GlobalNamespace::KeyBlank::__cordl_internal_get_finishedPropGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishedPropGroup;
}
constexpr ::GlobalNamespace::PropGroup const& GlobalNamespace::KeyBlank::__cordl_internal_get_finishedPropGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishedPropGroup;
}
constexpr void GlobalNamespace::KeyBlank::__cordl_internal_set_finishedPropGroup(::GlobalNamespace::PropGroup  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finishedPropGroup = value;
}
constexpr bool& GlobalNamespace::KeyBlank::__cordl_internal_get_startFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startFinished;
}
constexpr bool const& GlobalNamespace::KeyBlank::__cordl_internal_get_startFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startFinished;
}
constexpr void GlobalNamespace::KeyBlank::__cordl_internal_set_startFinished(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startFinished = value;
}
inline void GlobalNamespace::KeyBlank::OnStartClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::KeyBlank*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KeyBlank::OnBite(int32_t  stationIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyBlank*>(),
                        {"OnBite", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stationIndex);
}
inline void GlobalNamespace::KeyBlank::OnPinUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyBlank*>(),
                        {"OnPinUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KeyBlank::ServerCutSegment(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyBlank*>(),
                        {"ServerCutSegment", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::KeyBlank::OnCutsUpdated(::Mirror::SyncList_1_Operation<bool>  op, int32_t  index, bool  oldValue, bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyBlank*>(),
                        {"OnCutsUpdated", {}, {::i2c::type_of<::Mirror::SyncList_1_Operation<bool>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op, index, oldValue, newValue);
}
inline void GlobalNamespace::KeyBlank::RefreshPropGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyBlank*>(),
                        {"RefreshPropGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KeyBlank::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyBlank*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KeyBlank::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyBlank*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KeyBlank* GlobalNamespace::KeyBlank::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KeyBlank*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KeyBlank::KeyBlank()   {
}
