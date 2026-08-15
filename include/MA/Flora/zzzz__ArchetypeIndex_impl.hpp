#pragma once
// IWYU pragma private; include "MA/Flora/ArchetypeIndex.hpp"
#include "MA/Flora/zzzz__ArchetypeIndex_def.hpp"
#include "MA/Flora/zzzz__AABB_def.hpp"
#include "MA/Flora/zzzz__ArchetypeKey_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::ArchetypeIndex (*)()>(&::MA::Flora::ArchetypeIndex::get_None)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ArchetypeIndex::*)(int32_t)>(&::MA::Flora::ArchetypeIndex::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ArchetypeIndex::*)(::MA::Flora::ArchetypeIndex)>(&::MA::Flora::ArchetypeIndex::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805aa020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::ArchetypeIndex::*)(::MA::Flora::ArchetypeIndex)>(&::MA::Flora::ArchetypeIndex::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::ArchetypeIndex::*)(::System::Object*)>(&::MA::Flora::ArchetypeIndex::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181455990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                    {::i2c::class_of<::MA::Flora::ArchetypeIndex>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ArchetypeIndex::*)()>(&::MA::Flora::ArchetypeIndex::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                    {::i2c::class_of<::MA::Flora::ArchetypeIndex>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::ArchetypeIndex::*)()>(&::MA::Flora::ArchetypeIndex::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181455a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                    {::i2c::class_of<::MA::Flora::ArchetypeIndex>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::MA::Flora::ArchetypeIndex)>(&::MA::Flora::ArchetypeIndex::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::ArchetypeIndex, ::MA::Flora::ArchetypeIndex)>(&::MA::Flora::ArchetypeIndex::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<::MA::Flora::ArchetypeIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::ArchetypeIndex, ::MA::Flora::ArchetypeIndex)>(&::MA::Flora::ArchetypeIndex::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<::MA::Flora::ArchetypeIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.op_LessThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::ArchetypeIndex, ::MA::Flora::ArchetypeIndex)>(&::MA::Flora::ArchetypeIndex::op_LessThan)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181455ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"op_LessThan", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<::MA::Flora::ArchetypeIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.op_GreaterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::ArchetypeIndex, ::MA::Flora::ArchetypeIndex)>(&::MA::Flora::ArchetypeIndex::op_GreaterThan)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181455ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<::MA::Flora::ArchetypeIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::MA::Flora::ArchetypeKey> (::MA::Flora::ArchetypeIndex::*)()>(&::MA::Flora::ArchetypeIndex::get_Key)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814538d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"get_Key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.get_LocalAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::MA::Flora::AABB> (::MA::Flora::ArchetypeIndex::*)()>(&::MA::Flora::ArchetypeIndex::get_LocalAABB)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181453910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"get_LocalAABB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ArchetypeIndex::*)()>(&::MA::Flora::ArchetypeIndex::get_Version)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181453960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"get_Version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.set_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ArchetypeIndex::*)(int32_t)>(&::MA::Flora::ArchetypeIndex::set_Version)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181453a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"set_Version", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.get_ChunkCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ArchetypeIndex::*)()>(&::MA::Flora::ArchetypeIndex::get_ChunkCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181453750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"get_ChunkCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.set_ChunkCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ArchetypeIndex::*)(int32_t)>(&::MA::Flora::ArchetypeIndex::set_ChunkCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814539a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"set_ChunkCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.get_InstanceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ArchetypeIndex::*)()>(&::MA::Flora::ArchetypeIndex::get_InstanceCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181453890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"get_InstanceCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.set_InstanceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ArchetypeIndex::*)(int32_t)>(&::MA::Flora::ArchetypeIndex::set_InstanceCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814539f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"set_InstanceCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::ArchetypeIndex::*)()>(&::MA::Flora::ArchetypeIndex::get_Enabled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181453790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.get_HasRandomID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::ArchetypeIndex::*)()>(&::MA::Flora::ArchetypeIndex::get_HasRandomID)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814537d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"get_HasRandomID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ArchetypeIndex.get_HasVariationColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::ArchetypeIndex::*)()>(&::MA::Flora::ArchetypeIndex::get_HasVariationColor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181453830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"get_HasVariationColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::ArchetypeIndex MA::Flora::ArchetypeIndex::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::ArchetypeIndex>(nullptr, ___internal_method);
}
inline void MA::Flora::ArchetypeIndex::_ctor(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline int32_t MA::Flora::ArchetypeIndex::CompareTo(::MA::Flora::ArchetypeIndex  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool MA::Flora::ArchetypeIndex::Equals(::MA::Flora::ArchetypeIndex  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::ArchetypeIndex::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::ArchetypeIndex>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::ArchetypeIndex::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::ArchetypeIndex>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW MA::Flora::ArchetypeIndex::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::ArchetypeIndex>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t MA::Flora::ArchetypeIndex::op_Implicit_int32_t(::MA::Flora::ArchetypeIndex  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, index);
}
inline bool MA::Flora::ArchetypeIndex::op_Equality(::MA::Flora::ArchetypeIndex  a, ::MA::Flora::ArchetypeIndex  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<::MA::Flora::ArchetypeIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool MA::Flora::ArchetypeIndex::op_Inequality(::MA::Flora::ArchetypeIndex  a, ::MA::Flora::ArchetypeIndex  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<::MA::Flora::ArchetypeIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool MA::Flora::ArchetypeIndex::op_LessThan(::MA::Flora::ArchetypeIndex  a, ::MA::Flora::ArchetypeIndex  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"op_LessThan", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<::MA::Flora::ArchetypeIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool MA::Flora::ArchetypeIndex::op_GreaterThan(::MA::Flora::ArchetypeIndex  a, ::MA::Flora::ArchetypeIndex  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<::MA::Flora::ArchetypeIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::by_ref<::MA::Flora::ArchetypeKey> MA::Flora::ArchetypeIndex::get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::MA::Flora::ArchetypeKey>>(*this, ___internal_method);
}
inline ::by_ref<::MA::Flora::AABB> MA::Flora::ArchetypeIndex::get_LocalAABB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"get_LocalAABB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::MA::Flora::AABB>>(*this, ___internal_method);
}
inline int32_t MA::Flora::ArchetypeIndex::get_Version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"get_Version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void MA::Flora::ArchetypeIndex::set_Version(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"set_Version", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t MA::Flora::ArchetypeIndex::get_ChunkCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"get_ChunkCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void MA::Flora::ArchetypeIndex::set_ChunkCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"set_ChunkCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t MA::Flora::ArchetypeIndex::get_InstanceCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"get_InstanceCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void MA::Flora::ArchetypeIndex::set_InstanceCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"set_InstanceCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool MA::Flora::ArchetypeIndex::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::ArchetypeIndex::get_HasRandomID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"get_HasRandomID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::ArchetypeIndex::get_HasVariationColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ArchetypeIndex>(),
                        {"get_HasVariationColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::ArchetypeIndex>"
constexpr  MA::Flora::ArchetypeIndex::operator ::System::IEquatable_1<::MA::Flora::ArchetypeIndex>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::ArchetypeIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::ArchetypeIndex>"
constexpr ::System::IEquatable_1<::MA::Flora::ArchetypeIndex>* MA::Flora::ArchetypeIndex::i___System__IEquatable_1___MA__Flora__ArchetypeIndex_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::ArchetypeIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::ArchetypeIndex>"
constexpr  MA::Flora::ArchetypeIndex::operator ::System::IComparable_1<::MA::Flora::ArchetypeIndex>*()  {
return static_cast<::System::IComparable_1<::MA::Flora::ArchetypeIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::MA::Flora::ArchetypeIndex>"
constexpr ::System::IComparable_1<::MA::Flora::ArchetypeIndex>* MA::Flora::ArchetypeIndex::i___System__IComparable_1___MA__Flora__ArchetypeIndex_()  {
return static_cast<::System::IComparable_1<::MA::Flora::ArchetypeIndex>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::ArchetypeIndex::ArchetypeIndex(int32_t  Index) noexcept  {
this->Index = Index;
}
// Ctor Parameters []
constexpr ::MA::Flora::ArchetypeIndex::ArchetypeIndex()   {
}
