#pragma once
// IWYU pragma private; include "MA/Flora/ChunkIndex.hpp"
#include "MA/Flora/zzzz__ChunkIndex_def.hpp"
#include "MA/Flora/zzzz__AABB_def.hpp"
#include "MA/Flora/zzzz__ArchetypeIndex_def.hpp"
#include "MA/Flora/zzzz__BatchAllocation_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::Flora::ChunkIndex.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::ChunkIndex (*)()>(&::MA::Flora::ChunkIndex::get_None)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.AsInstanceOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ChunkIndex::*)()>(&::MA::Flora::ChunkIndex::AsInstanceOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181453af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"AsInstanceOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ChunkIndex::*)(int32_t)>(&::MA::Flora::ChunkIndex::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ChunkIndex::*)(::MA::Flora::ChunkIndex)>(&::MA::Flora::ChunkIndex::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805aa020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::ChunkIndex::*)(::MA::Flora::ChunkIndex)>(&::MA::Flora::ChunkIndex::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::ChunkIndex::*)(::System::Object*)>(&::MA::Flora::ChunkIndex::Equals)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180645c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                    {::i2c::class_of<::MA::Flora::ChunkIndex>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ChunkIndex::*)()>(&::MA::Flora::ChunkIndex::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                    {::i2c::class_of<::MA::Flora::ChunkIndex>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::ChunkIndex::*)()>(&::MA::Flora::ChunkIndex::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181453b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                    {::i2c::class_of<::MA::Flora::ChunkIndex>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::MA::Flora::ChunkIndex)>(&::MA::Flora::ChunkIndex::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::ChunkIndex, ::MA::Flora::ChunkIndex)>(&::MA::Flora::ChunkIndex::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::ChunkIndex>(), ::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::ChunkIndex, ::MA::Flora::ChunkIndex)>(&::MA::Flora::ChunkIndex::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::ChunkIndex>(), ::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.op_LessThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::ChunkIndex, ::MA::Flora::ChunkIndex)>(&::MA::Flora::ChunkIndex::op_LessThan)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181455ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"op_LessThan", {}, {::i2c::type_of<::MA::Flora::ChunkIndex>(), ::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.op_GreaterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::ChunkIndex, ::MA::Flora::ChunkIndex)>(&::MA::Flora::ChunkIndex::op_GreaterThan)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181455ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::MA::Flora::ChunkIndex>(), ::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.get_IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::ChunkIndex::*)()>(&::MA::Flora::ChunkIndex::get_IsEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181453e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_IsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.get_IsFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::ChunkIndex::*)()>(&::MA::Flora::ChunkIndex::get_IsFull)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181453e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_IsFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.get_Archetype
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::ArchetypeIndex (::MA::Flora::ChunkIndex::*)()>(&::MA::Flora::ChunkIndex::get_Archetype)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181453c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_Archetype", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.set_Archetype
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ChunkIndex::*)(::MA::Flora::ArchetypeIndex)>(&::MA::Flora::ChunkIndex::set_Archetype)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181453f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"set_Archetype", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.get_LocalAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::MA::Flora::AABB> (::MA::Flora::ChunkIndex::*)()>(&::MA::Flora::ChunkIndex::get_LocalAABB)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181453eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_LocalAABB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ChunkIndex::*)()>(&::MA::Flora::ChunkIndex::get_Count)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181453d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.set_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ChunkIndex::*)(int32_t)>(&::MA::Flora::ChunkIndex::set_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181454020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.GetInstanceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::MA::Flora::ChunkIndex)>(&::MA::Flora::ChunkIndex::GetInstanceCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181453b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"GetInstanceCount", {}, {::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.get_SpaceRemaining
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ChunkIndex::*)()>(&::MA::Flora::ChunkIndex::get_SpaceRemaining)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181453f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_SpaceRemaining", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.get_AllocatedMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::MA::Flora::ChunkIndex::*)()>(&::MA::Flora::ChunkIndex::get_AllocatedMask)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181453be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_AllocatedMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.get_IndexInArchetype
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ChunkIndex::*)()>(&::MA::Flora::ChunkIndex::get_IndexInArchetype)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181453d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_IndexInArchetype", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.set_IndexInArchetype
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ChunkIndex::*)(int32_t)>(&::MA::Flora::ChunkIndex::set_IndexInArchetype)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814540c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"set_IndexInArchetype", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.get_IndexInArchetypeFreeSlotList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ChunkIndex::*)()>(&::MA::Flora::ChunkIndex::get_IndexInArchetypeFreeSlotList)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181453d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_IndexInArchetypeFreeSlotList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.set_IndexInArchetypeFreeSlotList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ChunkIndex::*)(int32_t)>(&::MA::Flora::ChunkIndex::set_IndexInArchetypeFreeSlotList)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181454070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"set_IndexInArchetypeFreeSlotList", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.get_IndexInTemplateList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ChunkIndex::*)()>(&::MA::Flora::ChunkIndex::get_IndexInTemplateList)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181453dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_IndexInTemplateList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.set_IndexInTemplateList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ChunkIndex::*)(int32_t)>(&::MA::Flora::ChunkIndex::set_IndexInTemplateList)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181454110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"set_IndexInTemplateList", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.get_BatchAllocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::BatchAllocation (::MA::Flora::ChunkIndex::*)()>(&::MA::Flora::ChunkIndex::get_BatchAllocation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181453cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_BatchAllocation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ChunkIndex.set_BatchAllocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ChunkIndex::*)(::MA::Flora::BatchAllocation)>(&::MA::Flora::ChunkIndex::set_BatchAllocation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181453fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"set_BatchAllocation", {}, {::i2c::type_of<::MA::Flora::BatchAllocation>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::ChunkIndex MA::Flora::ChunkIndex::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::ChunkIndex>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::ChunkIndex::AsInstanceOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"AsInstanceOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void MA::Flora::ChunkIndex::_ctor(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline int32_t MA::Flora::ChunkIndex::CompareTo(::MA::Flora::ChunkIndex  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool MA::Flora::ChunkIndex::Equals(::MA::Flora::ChunkIndex  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::ChunkIndex::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::ChunkIndex>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::ChunkIndex::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::ChunkIndex>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW MA::Flora::ChunkIndex::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::ChunkIndex>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t MA::Flora::ChunkIndex::op_Implicit_int32_t(::MA::Flora::ChunkIndex  chunkIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, chunkIndex);
}
inline bool MA::Flora::ChunkIndex::op_Equality(::MA::Flora::ChunkIndex  a, ::MA::Flora::ChunkIndex  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::ChunkIndex>(), ::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool MA::Flora::ChunkIndex::op_Inequality(::MA::Flora::ChunkIndex  a, ::MA::Flora::ChunkIndex  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::ChunkIndex>(), ::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool MA::Flora::ChunkIndex::op_LessThan(::MA::Flora::ChunkIndex  a, ::MA::Flora::ChunkIndex  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"op_LessThan", {}, {::i2c::type_of<::MA::Flora::ChunkIndex>(), ::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool MA::Flora::ChunkIndex::op_GreaterThan(::MA::Flora::ChunkIndex  a, ::MA::Flora::ChunkIndex  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::MA::Flora::ChunkIndex>(), ::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool MA::Flora::ChunkIndex::get_IsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_IsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::ChunkIndex::get_IsFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_IsFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::MA::Flora::ArchetypeIndex MA::Flora::ChunkIndex::get_Archetype()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_Archetype", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::ArchetypeIndex>(*this, ___internal_method);
}
inline void MA::Flora::ChunkIndex::set_Archetype(::MA::Flora::ArchetypeIndex  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"set_Archetype", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::by_ref<::MA::Flora::AABB> MA::Flora::ChunkIndex::get_LocalAABB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_LocalAABB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::MA::Flora::AABB>>(*this, ___internal_method);
}
inline int32_t MA::Flora::ChunkIndex::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void MA::Flora::ChunkIndex::set_Count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t MA::Flora::ChunkIndex::GetInstanceCount(::MA::Flora::ChunkIndex  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"GetInstanceCount", {}, {::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, chunk);
}
inline int32_t MA::Flora::ChunkIndex::get_SpaceRemaining()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_SpaceRemaining", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint64_t MA::Flora::ChunkIndex::get_AllocatedMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_AllocatedMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline int32_t MA::Flora::ChunkIndex::get_IndexInArchetype()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_IndexInArchetype", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void MA::Flora::ChunkIndex::set_IndexInArchetype(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"set_IndexInArchetype", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t MA::Flora::ChunkIndex::get_IndexInArchetypeFreeSlotList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_IndexInArchetypeFreeSlotList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void MA::Flora::ChunkIndex::set_IndexInArchetypeFreeSlotList(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"set_IndexInArchetypeFreeSlotList", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t MA::Flora::ChunkIndex::get_IndexInTemplateList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_IndexInTemplateList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void MA::Flora::ChunkIndex::set_IndexInTemplateList(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"set_IndexInTemplateList", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::MA::Flora::BatchAllocation MA::Flora::ChunkIndex::get_BatchAllocation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"get_BatchAllocation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::BatchAllocation>(*this, ___internal_method);
}
inline void MA::Flora::ChunkIndex::set_BatchAllocation(::MA::Flora::BatchAllocation  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChunkIndex>(),
                        {"set_BatchAllocation", {}, {::i2c::type_of<::MA::Flora::BatchAllocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::ChunkIndex>"
constexpr  MA::Flora::ChunkIndex::operator ::System::IEquatable_1<::MA::Flora::ChunkIndex>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::ChunkIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::ChunkIndex>"
constexpr ::System::IEquatable_1<::MA::Flora::ChunkIndex>* MA::Flora::ChunkIndex::i___System__IEquatable_1___MA__Flora__ChunkIndex_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::ChunkIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::ChunkIndex>"
constexpr  MA::Flora::ChunkIndex::operator ::System::IComparable_1<::MA::Flora::ChunkIndex>*()  {
return static_cast<::System::IComparable_1<::MA::Flora::ChunkIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::MA::Flora::ChunkIndex>"
constexpr ::System::IComparable_1<::MA::Flora::ChunkIndex>* MA::Flora::ChunkIndex::i___System__IComparable_1___MA__Flora__ChunkIndex_()  {
return static_cast<::System::IComparable_1<::MA::Flora::ChunkIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::ChunkIndex::ChunkIndex(int32_t  Index) noexcept  {
this->Index = Index;
}
// Ctor Parameters []
constexpr ::MA::Flora::ChunkIndex::ChunkIndex()   {
}
