#pragma once
// IWYU pragma private; include "Dissonance/VoiceProximityReceiptTrigger.hpp"
#include "Dissonance/zzzz__BaseProximityTrigger_1_impl.hpp"
#include "Dissonance/zzzz__RoomMembership_impl.hpp"
#include "Dissonance/zzzz__VoiceProximityReceiptTrigger_def.hpp"
#include "Dissonance/zzzz__BaseProximityTrigger_1_def.hpp"
#include "Dissonance/zzzz__IVoiceReceiptTrigger_def.hpp"
#include "Dissonance/zzzz__RoomMembership_def.hpp"
#include "Dissonance/zzzz__VoiceProximityReceiptTrigger_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid::*)(::Dissonance::VoiceProximityReceiptTrigger*)>(&::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ce3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::VoiceProximityReceiptTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid.CreateHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::RoomMembership (::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid::*)(::UnityEngine::Vector3Int, ::StringW)>(&::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid::CreateHandle)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805ce300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid*>(),
                    {::i2c::class_of<::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid.CloseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid::*)(::Dissonance::RoomMembership)>(&::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid::CloseHandle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ce2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid*>(),
                    {::i2c::class_of<::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Dissonance::VoiceProximityReceiptTrigger>& Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr ::UnityW<::Dissonance::VoiceProximityReceiptTrigger> const& Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr void Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid::__cordl_internal_set__parent(::UnityW<::Dissonance::VoiceProximityReceiptTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parent = value;
}
inline void Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid::_ctor(::Dissonance::VoiceProximityReceiptTrigger*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::VoiceProximityReceiptTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline ::Dissonance::RoomMembership Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid::CreateHandle(::UnityEngine::Vector3Int  id, ::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::RoomMembership>(this, ___internal_method, id, name);
}
inline void Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid::CloseHandle(::Dissonance::RoomMembership  handle)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid* Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid::New_ctor(::Dissonance::VoiceProximityReceiptTrigger*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid*>(parent));
}
// Ctor Parameters []
constexpr ::Dissonance::VoiceProximityReceiptTrigger_ReceiptGrid::VoiceProximityReceiptTrigger_ReceiptGrid()   {
}
//  Writing Method size for method: ::Dissonance::VoiceProximityReceiptTrigger.CreateGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::BaseProximityTrigger_1_Grid<::Dissonance::RoomMembership>* (::Dissonance::VoiceProximityReceiptTrigger::*)()>(&::Dissonance::VoiceProximityReceiptTrigger::CreateGrid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805d47b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceProximityReceiptTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceProximityReceiptTrigger*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceProximityReceiptTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceProximityReceiptTrigger::*)()>(&::Dissonance::VoiceProximityReceiptTrigger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d4800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityReceiptTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Dissonance::VoiceProximityReceiptTrigger::__cordl_internal_get__roomExpanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomExpanded;
}
constexpr bool const& Dissonance::VoiceProximityReceiptTrigger::__cordl_internal_get__roomExpanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomExpanded;
}
constexpr void Dissonance::VoiceProximityReceiptTrigger::__cordl_internal_set__roomExpanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomExpanded = value;
}
constexpr bool& Dissonance::VoiceProximityReceiptTrigger::__cordl_internal_get__tokensExpanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tokensExpanded;
}
constexpr bool const& Dissonance::VoiceProximityReceiptTrigger::__cordl_internal_get__tokensExpanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tokensExpanded;
}
constexpr void Dissonance::VoiceProximityReceiptTrigger::__cordl_internal_set__tokensExpanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tokensExpanded = value;
}
constexpr bool& Dissonance::VoiceProximityReceiptTrigger::__cordl_internal_get__colliderExpanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliderExpanded;
}
constexpr bool const& Dissonance::VoiceProximityReceiptTrigger::__cordl_internal_get__colliderExpanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliderExpanded;
}
constexpr void Dissonance::VoiceProximityReceiptTrigger::__cordl_internal_set__colliderExpanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colliderExpanded = value;
}
inline ::Dissonance::BaseProximityTrigger_1_Grid<::Dissonance::RoomMembership>* Dissonance::VoiceProximityReceiptTrigger::CreateGrid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceProximityReceiptTrigger*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::BaseProximityTrigger_1_Grid<::Dissonance::RoomMembership>*>(this, ___internal_method);
}
inline void Dissonance::VoiceProximityReceiptTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceProximityReceiptTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::VoiceProximityReceiptTrigger* Dissonance::VoiceProximityReceiptTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::VoiceProximityReceiptTrigger*>());
}
/// @brief Convert operator to "::Dissonance::IVoiceReceiptTrigger"
constexpr  Dissonance::VoiceProximityReceiptTrigger::operator ::Dissonance::IVoiceReceiptTrigger*() noexcept {
return static_cast<::Dissonance::IVoiceReceiptTrigger*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::IVoiceReceiptTrigger"
constexpr ::Dissonance::IVoiceReceiptTrigger* Dissonance::VoiceProximityReceiptTrigger::i___Dissonance__IVoiceReceiptTrigger() noexcept {
return static_cast<::Dissonance::IVoiceReceiptTrigger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::VoiceProximityReceiptTrigger::VoiceProximityReceiptTrigger()   {
}
