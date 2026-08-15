#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHomeBlock.hpp"
#include "GlobalNamespace/zzzz__PropHome_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PropHomeBlock_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropHomeBlock.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHomeBlock::*)()>(&::GlobalNamespace::PropHomeBlock::Awake)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180411770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeBlock*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHomeBlock.OnPinChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHomeBlock::*)(::GlobalNamespace::PropHome*, ::GlobalNamespace::Prop*, ::GlobalNamespace::Prop*)>(&::GlobalNamespace::PropHomeBlock::OnPinChange)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804118c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeBlock*>(),
                        {"OnPinChange", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHomeBlock.SetFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHomeBlock::*)(bool)>(&::GlobalNamespace::PropHomeBlock::SetFull)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180411930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeBlock*>(),
                        {"SetFull", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHomeBlock.AreAllHomesFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PropHomeBlock::*)()>(&::GlobalNamespace::PropHomeBlock::AreAllHomesFull)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804116e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeBlock*>(),
                        {"AreAllHomesFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHomeBlock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHomeBlock::*)()>(&::GlobalNamespace::PropHomeBlock::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeBlock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropHome>>& GlobalNamespace::PropHomeBlock::__cordl_internal_get_homes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___homes;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropHome>> const& GlobalNamespace::PropHomeBlock::__cordl_internal_get_homes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___homes;
}
constexpr void GlobalNamespace::PropHomeBlock::__cordl_internal_set_homes(::ArrayW<::UnityW<::GlobalNamespace::PropHome>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___homes = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::PropHomeBlock::__cordl_internal_get_isFullDirectControlSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFullDirectControlSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::PropHomeBlock::__cordl_internal_get_isFullDirectControlSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFullDirectControlSystem;
}
constexpr void GlobalNamespace::PropHomeBlock::__cordl_internal_set_isFullDirectControlSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isFullDirectControlSystem = value;
}
constexpr bool& GlobalNamespace::PropHomeBlock::__cordl_internal_get_isFull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFull;
}
constexpr bool const& GlobalNamespace::PropHomeBlock::__cordl_internal_get_isFull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFull;
}
constexpr void GlobalNamespace::PropHomeBlock::__cordl_internal_set_isFull(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isFull = value;
}
inline void GlobalNamespace::PropHomeBlock::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeBlock*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHomeBlock::OnPinChange(::GlobalNamespace::PropHome*  propHome, ::GlobalNamespace::Prop*  propBefore, ::GlobalNamespace::Prop*  propAfter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeBlock*>(),
                        {"OnPinChange", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propHome, propBefore, propAfter);
}
inline void GlobalNamespace::PropHomeBlock::SetFull(bool  isFull)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeBlock*>(),
                        {"SetFull", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isFull);
}
inline bool GlobalNamespace::PropHomeBlock::AreAllHomesFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeBlock*>(),
                        {"AreAllHomesFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PropHomeBlock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeBlock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropHomeBlock* GlobalNamespace::PropHomeBlock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropHomeBlock*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropHomeBlock::PropHomeBlock()   {
}
