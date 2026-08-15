#pragma once
// IWYU pragma private; include "Dissonance/BaseProximityTrigger_1.hpp"
#include "Dissonance/zzzz__BaseCommsTrigger_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__BaseProximityTrigger_1_def.hpp"
#include "Dissonance/zzzz__BaseProximityTrigger_1_def.hpp"
#include "Dissonance/zzzz__IDissonancePlayer_def.hpp"
#include "Dissonance/zzzz__VoicePlayerState_def.hpp"
#include "Dissonance/zzzz__VoiceProximityBroadcastTrigger_def.hpp"
#include "Dissonance/zzzz__VoiceProximityReceiptTrigger_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__BoundsInt_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
template<typename THandle>
constexpr ::UnityW<THandle>& Dissonance::BaseProximityTrigger_1_Grid<THandle>::__cordl_internal_get__Parent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parent_k__BackingField;
}
template<typename THandle>
constexpr ::UnityW<THandle> const& Dissonance::BaseProximityTrigger_1_Grid<THandle>::__cordl_internal_get__Parent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parent_k__BackingField;
}
template<typename THandle>
constexpr void Dissonance::BaseProximityTrigger_1_Grid<THandle>::__cordl_internal_set__Parent_k__BackingField(::UnityW<THandle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Parent_k__BackingField = value;
}
template<typename THandle>
constexpr ::System::Text::StringBuilder*& Dissonance::BaseProximityTrigger_1_Grid<THandle>::__cordl_internal_get__nameBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nameBuilder;
}
template<typename THandle>
constexpr ::System::Text::StringBuilder* const& Dissonance::BaseProximityTrigger_1_Grid<THandle>::__cordl_internal_get__nameBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nameBuilder;
}
template<typename THandle>
constexpr void Dissonance::BaseProximityTrigger_1_Grid<THandle>::__cordl_internal_set__nameBuilder(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nameBuilder = value;
}
template<typename THandle>
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int,THandle>>*& Dissonance::BaseProximityTrigger_1_Grid<THandle>::__cordl_internal_get__handles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handles;
}
template<typename THandle>
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int,THandle>>* const& Dissonance::BaseProximityTrigger_1_Grid<THandle>::__cordl_internal_get__handles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handles;
}
template<typename THandle>
constexpr void Dissonance::BaseProximityTrigger_1_Grid<THandle>::__cordl_internal_set__handles(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int,THandle>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handles = value;
}
template<typename THandle>
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3Int>*& Dissonance::BaseProximityTrigger_1_Grid<THandle>::__cordl_internal_get__keys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keys;
}
template<typename THandle>
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3Int>* const& Dissonance::BaseProximityTrigger_1_Grid<THandle>::__cordl_internal_get__keys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keys;
}
template<typename THandle>
constexpr void Dissonance::BaseProximityTrigger_1_Grid<THandle>::__cordl_internal_set__keys(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3Int>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____keys = value;
}
template<typename THandle>
constexpr ::Dissonance::IDissonancePlayer*& Dissonance::BaseProximityTrigger_1_Grid<THandle>::__cordl_internal_get__player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
template<typename THandle>
constexpr ::Dissonance::IDissonancePlayer* const& Dissonance::BaseProximityTrigger_1_Grid<THandle>::__cordl_internal_get__player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
template<typename THandle>
constexpr void Dissonance::BaseProximityTrigger_1_Grid<THandle>::__cordl_internal_set__player(::Dissonance::IDissonancePlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____player = value;
}
template<typename THandle>
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int,::StringW>*& Dissonance::BaseProximityTrigger_1_Grid<THandle>::__cordl_internal_get__roomNameCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomNameCache;
}
template<typename THandle>
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int,::StringW>* const& Dissonance::BaseProximityTrigger_1_Grid<THandle>::__cordl_internal_get__roomNameCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomNameCache;
}
template<typename THandle>
constexpr void Dissonance::BaseProximityTrigger_1_Grid<THandle>::__cordl_internal_set__roomNameCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomNameCache = value;
}
template<typename THandle>
inline ::UnityW<THandle> Dissonance::BaseProximityTrigger_1_Grid<THandle>::get_Parent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1_Grid<THandle>*>(),
                        {"get_Parent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<THandle>>(this, ___internal_method);
}
template<typename THandle>
inline int32_t Dissonance::BaseProximityTrigger_1_Grid<THandle>::get_ChannelCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1_Grid<THandle>*>(),
                        {"get_ChannelCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename THandle>
inline void Dissonance::BaseProximityTrigger_1_Grid<THandle>::_ctor(::Dissonance::BaseProximityTrigger_1<THandle>*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1_Grid<THandle>*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::BaseProximityTrigger_1<THandle>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
template<typename THandle>
inline void Dissonance::BaseProximityTrigger_1_Grid<THandle>::Update(::Dissonance::IDissonancePlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1_Grid<THandle>*>(),
                        {"Update", {}, {::i2c::type_of<::Dissonance::IDissonancePlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
template<typename THandle>
inline bool Dissonance::BaseProximityTrigger_1_Grid<THandle>::InBound(::UnityEngine::Vector3Int  point, ::UnityEngine::BoundsInt  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1_Grid<THandle>*>(),
                        {"InBound", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, point, bounds);
}
template<typename THandle>
inline void Dissonance::BaseProximityTrigger_1_Grid<THandle>::CloseAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1_Grid<THandle>*>(),
                        {"CloseAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename THandle>
inline THandle Dissonance::BaseProximityTrigger_1_Grid<THandle>::CreateHandle(::UnityEngine::Vector3Int  id, ::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseProximityTrigger_1_Grid<THandle>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<THandle>(this, ___internal_method, id, name);
}
template<typename THandle>
inline void Dissonance::BaseProximityTrigger_1_Grid<THandle>::CloseHandle(THandle  handle)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseProximityTrigger_1_Grid<THandle>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
template<typename THandle>
inline ::UnityEngine::Vector3Int Dissonance::BaseProximityTrigger_1_Grid<THandle>::CellPos(::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1_Grid<THandle>*>(),
                        {"CellPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(this, ___internal_method, pos);
}
template<typename THandle>
inline ::StringW Dissonance::BaseProximityTrigger_1_Grid<THandle>::GenerateName(::UnityEngine::Vector3Int  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1_Grid<THandle>*>(),
                        {"GenerateName", {}, {::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, pos);
}
template<typename THandle>
inline void Dissonance::BaseProximityTrigger_1_Grid<THandle>::DrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1_Grid<THandle>*>(),
                        {"DrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename THandle>
inline void Dissonance::BaseProximityTrigger_1_Grid<THandle>::DrawCube(::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max, ::UnityEngine::Color  lines, ::UnityEngine::Color  fill)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1_Grid<THandle>*>(),
                        {"DrawCube", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, min, max, lines, fill);
}
template<typename THandle>
inline ::Dissonance::BaseProximityTrigger_1_Grid<THandle>* Dissonance::BaseProximityTrigger_1_Grid<THandle>::New_ctor(::Dissonance::BaseProximityTrigger_1<THandle>*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::BaseProximityTrigger_1_Grid<THandle>*>(parent));
}
// Ctor Parameters []
template<typename THandle>
constexpr ::Dissonance::BaseProximityTrigger_1_Grid<THandle>::BaseProximityTrigger_1_Grid()   {
}
template<typename THandle>
constexpr int32_t& Dissonance::BaseProximityTrigger_1<THandle>::__cordl_internal_get__range()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____range;
}
template<typename THandle>
constexpr int32_t const& Dissonance::BaseProximityTrigger_1<THandle>::__cordl_internal_get__range() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____range;
}
template<typename THandle>
constexpr void Dissonance::BaseProximityTrigger_1<THandle>::__cordl_internal_set__range(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____range = value;
}
template<typename THandle>
constexpr ::StringW& Dissonance::BaseProximityTrigger_1<THandle>::__cordl_internal_get__roomName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomName;
}
template<typename THandle>
constexpr ::StringW const& Dissonance::BaseProximityTrigger_1<THandle>::__cordl_internal_get__roomName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomName;
}
template<typename THandle>
constexpr void Dissonance::BaseProximityTrigger_1<THandle>::__cordl_internal_set__roomName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomName = value;
}
template<typename THandle>
constexpr bool& Dissonance::BaseProximityTrigger_1<THandle>::__cordl_internal_get__useTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useTrigger;
}
template<typename THandle>
constexpr bool const& Dissonance::BaseProximityTrigger_1<THandle>::__cordl_internal_get__useTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useTrigger;
}
template<typename THandle>
constexpr void Dissonance::BaseProximityTrigger_1<THandle>::__cordl_internal_set__useTrigger(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useTrigger = value;
}
template<typename THandle>
constexpr ::Dissonance::VoicePlayerState*& Dissonance::BaseProximityTrigger_1<THandle>::__cordl_internal_get__self()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____self;
}
template<typename THandle>
constexpr ::Dissonance::VoicePlayerState* const& Dissonance::BaseProximityTrigger_1<THandle>::__cordl_internal_get__self() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____self;
}
template<typename THandle>
constexpr void Dissonance::BaseProximityTrigger_1<THandle>::__cordl_internal_set__self(::Dissonance::VoicePlayerState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____self = value;
}
template<typename THandle>
constexpr ::Dissonance::BaseProximityTrigger_1_Grid<THandle>*& Dissonance::BaseProximityTrigger_1<THandle>::__cordl_internal_get__grid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grid;
}
template<typename THandle>
constexpr ::Dissonance::BaseProximityTrigger_1_Grid<THandle>* const& Dissonance::BaseProximityTrigger_1<THandle>::__cordl_internal_get__grid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grid;
}
template<typename THandle>
constexpr void Dissonance::BaseProximityTrigger_1<THandle>::__cordl_internal_set__grid(::Dissonance::BaseProximityTrigger_1_Grid<THandle>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grid = value;
}
template<typename THandle>
inline float_t Dissonance::BaseProximityTrigger_1<THandle>::get_Size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(),
                        {"get_Size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename THandle>
inline int32_t Dissonance::BaseProximityTrigger_1<THandle>::get_Range()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(),
                        {"get_Range", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename THandle>
inline void Dissonance::BaseProximityTrigger_1<THandle>::set_Range(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(),
                        {"set_Range", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename THandle>
inline ::StringW Dissonance::BaseProximityTrigger_1<THandle>::get_RoomName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(),
                        {"get_RoomName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename THandle>
inline void Dissonance::BaseProximityTrigger_1<THandle>::set_RoomName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(),
                        {"set_RoomName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename THandle>
inline bool Dissonance::BaseProximityTrigger_1<THandle>::get_CanTrigger()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename THandle>
inline bool Dissonance::BaseProximityTrigger_1<THandle>::get_UseColliderTrigger()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename THandle>
inline void Dissonance::BaseProximityTrigger_1<THandle>::set_UseColliderTrigger(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename THandle>
inline int32_t Dissonance::BaseProximityTrigger_1<THandle>::get_ActiveChannelCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(),
                        {"get_ActiveChannelCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename THandle>
inline ::Dissonance::BaseProximityTrigger_1_Grid<THandle>* Dissonance::BaseProximityTrigger_1<THandle>::CreateGrid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::BaseProximityTrigger_1_Grid<THandle>*>(this, ___internal_method);
}
template<typename THandle>
inline void Dissonance::BaseProximityTrigger_1<THandle>::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename THandle>
inline void Dissonance::BaseProximityTrigger_1<THandle>::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename THandle>
inline void Dissonance::BaseProximityTrigger_1<THandle>::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename THandle>
inline void Dissonance::BaseProximityTrigger_1<THandle>::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename THandle>
inline void Dissonance::BaseProximityTrigger_1<THandle>::CloseChannels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(),
                        {"CloseChannels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename THandle>
inline bool Dissonance::BaseProximityTrigger_1<THandle>::AllowJoin(::UnityEngine::Vector3Int  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(),
                        {"AllowJoin", {}, {::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
template<typename THandle>
inline bool Dissonance::BaseProximityTrigger_1<THandle>::AllowJoin(::Dissonance::VoicePlayerState*  player, ::UnityEngine::Vector3Int  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, id);
}
template<typename THandle>
inline ::UnityEngine::Bounds Dissonance::BaseProximityTrigger_1<THandle>::GetCellBounds(::UnityEngine::Vector3Int  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(),
                        {"GetCellBounds", {}, {::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, id);
}
template<typename THandle>
inline void Dissonance::BaseProximityTrigger_1<THandle>::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename THandle>
inline bool Dissonance::BaseProximityTrigger_1<THandle>::IsUserActivated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename THandle>
inline void Dissonance::BaseProximityTrigger_1<THandle>::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename THandle>
inline void Dissonance::BaseProximityTrigger_1<THandle>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename THandle>
inline bool Dissonance::BaseProximityTrigger_1<THandle>::_OnValidate_b__21_0(::Dissonance::VoiceProximityBroadcastTrigger*  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(),
                        {"<OnValidate>b__21_0", {}, {::i2c::type_of<::Dissonance::VoiceProximityBroadcastTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a);
}
template<typename THandle>
inline bool Dissonance::BaseProximityTrigger_1<THandle>::_OnValidate_b__21_1(::Dissonance::VoiceProximityReceiptTrigger*  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseProximityTrigger_1<THandle>*>(),
                        {"<OnValidate>b__21_1", {}, {::i2c::type_of<::Dissonance::VoiceProximityReceiptTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a);
}
template<typename THandle>
inline ::Dissonance::BaseProximityTrigger_1<THandle>* Dissonance::BaseProximityTrigger_1<THandle>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::BaseProximityTrigger_1<THandle>*>());
}
// Ctor Parameters []
template<typename THandle>
constexpr ::Dissonance::BaseProximityTrigger_1<THandle>::BaseProximityTrigger_1()   {
}
