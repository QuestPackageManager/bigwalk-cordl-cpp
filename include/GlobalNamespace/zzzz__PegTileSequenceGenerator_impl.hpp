#pragma once
// IWYU pragma private; include "GlobalNamespace/PegTileSequenceGenerator.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "GlobalNamespace/zzzz__PegTileSet_impl.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PegTileSequenceGenerator_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PegTileDataSet_def.hpp"
#include "GlobalNamespace/zzzz__PegTileSet_def.hpp"
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceGenerator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileSequenceGenerator::*)()>(&::GlobalNamespace::PegTileSequenceGenerator::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180406a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceGenerator.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileSequenceGenerator::*)()>(&::GlobalNamespace::PegTileSequenceGenerator::Start)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180407510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceGenerator.Scramble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileSequenceGenerator::*)(int32_t)>(&::GlobalNamespace::PegTileSequenceGenerator::Scramble)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180407260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"Scramble", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceGenerator.GetRandomTileFromSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PropGroup (::GlobalNamespace::PegTileSequenceGenerator::*)(::GlobalNamespace::PegTileSet, ::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*)>(&::GlobalNamespace::PegTileSequenceGenerator::GetRandomTileFromSet)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x180406e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"GetRandomTileFromSet", {}, {::i2c::type_of<::GlobalNamespace::PegTileSet>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceGenerator.OnChangeSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileSequenceGenerator::*)(int32_t, int32_t)>(&::GlobalNamespace::PegTileSequenceGenerator::OnChangeSeed)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804070e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"OnChangeSeed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceGenerator.OnChangeBlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileSequenceGenerator::*)(bool, bool)>(&::GlobalNamespace::PegTileSequenceGenerator::OnChangeBlocked)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180407080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"OnChangeBlocked", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceGenerator.ScramblePeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileSequenceGenerator::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PegTileSequenceGenerator::ScramblePeck)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180407200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"ScramblePeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceGenerator.BlockedPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileSequenceGenerator::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PegTileSequenceGenerator::BlockedPeck)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180406aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"BlockedPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceGenerator.SetRandomSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileSequenceGenerator::*)()>(&::GlobalNamespace::PegTileSequenceGenerator::SetRandomSeed)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1804073e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"SetRandomSeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceGenerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileSequenceGenerator::*)()>(&::GlobalNamespace::PegTileSequenceGenerator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceGenerator.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileSequenceGenerator::*)()>(&::GlobalNamespace::PegTileSequenceGenerator::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceGenerator.get_Networkseed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PegTileSequenceGenerator::*)()>(&::GlobalNamespace::PegTileSequenceGenerator::get_Networkseed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"get_Networkseed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceGenerator.set_Networkseed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileSequenceGenerator::*)(::ByRefConst<int32_t>)>(&::GlobalNamespace::PegTileSequenceGenerator::set_Networkseed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180407660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"set_Networkseed", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceGenerator.get_NetworkisBlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PegTileSequenceGenerator::*)()>(&::GlobalNamespace::PegTileSequenceGenerator::get_NetworkisBlocked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180407540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"get_NetworkisBlocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceGenerator.set_NetworkisBlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileSequenceGenerator::*)(::ByRefConst<bool>)>(&::GlobalNamespace::PegTileSequenceGenerator::set_NetworkisBlocked)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180407550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"set_NetworkisBlocked", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceGenerator.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileSequenceGenerator::*)(::Mirror::NetworkWriter*, bool)>(&::GlobalNamespace::PegTileSequenceGenerator::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180407370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                    {::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceGenerator.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileSequenceGenerator::*)(::Mirror::NetworkReader*, bool)>(&::GlobalNamespace::PegTileSequenceGenerator::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180406c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                    {::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_seed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr int32_t const& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_seed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr void GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_set_seed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seed = value;
}
constexpr bool& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_isBlocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBlocked;
}
constexpr bool const& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_isBlocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBlocked;
}
constexpr void GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_set_isBlocked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isBlocked = value;
}
constexpr int32_t& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_sequenceLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequenceLength;
}
constexpr int32_t const& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_sequenceLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequenceLength;
}
constexpr void GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_set_sequenceLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sequenceLength = value;
}
constexpr bool& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_isTiedToSave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTiedToSave;
}
constexpr bool const& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_isTiedToSave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTiedToSave;
}
constexpr void GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_set_isTiedToSave(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isTiedToSave = value;
}
constexpr int32_t& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_saveSeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveSeed;
}
constexpr int32_t const& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_saveSeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveSeed;
}
constexpr void GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_set_saveSeed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveSeed = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_sequence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequence;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>* const& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_sequence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequence;
}
constexpr void GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_set_sequence(::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sequence = value;
}
constexpr ::UnityW<::GlobalNamespace::PegTileDataSet>& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_pegTileDataSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pegTileDataSet;
}
constexpr ::UnityW<::GlobalNamespace::PegTileDataSet> const& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_pegTileDataSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pegTileDataSet;
}
constexpr void GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_set_pegTileDataSet(::UnityW<::GlobalNamespace::PegTileDataSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pegTileDataSet = value;
}
constexpr ::GlobalNamespace::PegTileSet& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_pegTileSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pegTileSet;
}
constexpr ::GlobalNamespace::PegTileSet const& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_pegTileSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pegTileSet;
}
constexpr void GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_set_pegTileSet(::GlobalNamespace::PegTileSet  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pegTileSet = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PegTileSet>*& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_setsPerSlot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setsPerSlot;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PegTileSet>* const& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_setsPerSlot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setsPerSlot;
}
constexpr void GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_set_setsPerSlot(::System::Collections::Generic::List_1<::GlobalNamespace::PegTileSet>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setsPerSlot = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_scrambleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrambleSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_scrambleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrambleSystem;
}
constexpr void GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_set_scrambleSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scrambleSystem = value;
}
constexpr ::GlobalNamespace::PeckStateFilter& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_scrambleStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrambleStates;
}
constexpr ::GlobalNamespace::PeckStateFilter const& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_scrambleStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrambleStates;
}
constexpr void GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_set_scrambleStates(::GlobalNamespace::PeckStateFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scrambleStates = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_blockedSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockedSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_blockedSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockedSystem;
}
constexpr void GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_set_blockedSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockedSystem = value;
}
constexpr bool& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*>*& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_onScramble()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onScramble;
}
constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*>* const& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_onScramble() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onScramble;
}
constexpr void GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_set_onScramble(::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onScramble = value;
}
constexpr ::System::Action*& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_onChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChange;
}
constexpr ::System::Action* const& GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_get_onChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChange;
}
constexpr void GlobalNamespace::PegTileSequenceGenerator::__cordl_internal_set_onChange(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onChange = value;
}
inline void GlobalNamespace::PegTileSequenceGenerator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PegTileSequenceGenerator::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PegTileSequenceGenerator::Scramble(int32_t  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"Scramble", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline ::GlobalNamespace::PropGroup GlobalNamespace::PegTileSequenceGenerator::GetRandomTileFromSet(::GlobalNamespace::PegTileSet  pegTileSet, ::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*  avoidThesePropGroups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"GetRandomTileFromSet", {}, {::i2c::type_of<::GlobalNamespace::PegTileSet>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PropGroup>(this, ___internal_method, pegTileSet, avoidThesePropGroups);
}
inline void GlobalNamespace::PegTileSequenceGenerator::OnChangeSeed(int32_t  oldSeed, int32_t  newSeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"OnChangeSeed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldSeed, newSeed);
}
inline void GlobalNamespace::PegTileSequenceGenerator::OnChangeBlocked(bool  oldBlocked, bool  newBlocked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"OnChangeBlocked", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldBlocked, newBlocked);
}
inline void GlobalNamespace::PegTileSequenceGenerator::ScramblePeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"ScramblePeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PegTileSequenceGenerator::BlockedPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"BlockedPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PegTileSequenceGenerator::SetRandomSeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"SetRandomSeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PegTileSequenceGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PegTileSequenceGenerator::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PegTileSequenceGenerator::get_Networkseed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"get_Networkseed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PegTileSequenceGenerator::set_Networkseed(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"set_Networkseed", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PegTileSequenceGenerator::get_NetworkisBlocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"get_NetworkisBlocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PegTileSequenceGenerator::set_NetworkisBlocked(::ByRefConst<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(),
                        {"set_NetworkisBlocked", {}, {::i2c::type_of<::ByRefConst<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PegTileSequenceGenerator::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void GlobalNamespace::PegTileSequenceGenerator::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PegTileSequenceGenerator*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::GlobalNamespace::PegTileSequenceGenerator* GlobalNamespace::PegTileSequenceGenerator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PegTileSequenceGenerator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PegTileSequenceGenerator::PegTileSequenceGenerator()   {
}
