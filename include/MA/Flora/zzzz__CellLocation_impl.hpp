#pragma once
// IWYU pragma private; include "MA/Flora/CellLocation.hpp"
#include "Unity/Mathematics/zzzz__int4_impl.hpp"
#include "MA/Flora/zzzz__CellLocation_def.hpp"
#include "MA/Flora/zzzz__AABB_def.hpp"
#include "MA/Flora/zzzz__BlockLocation_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "Unity/Mathematics/zzzz__int4_def.hpp"
//  Writing Method size for method: ::MA::Flora::CellLocation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CellLocation::*)(::Unity::Mathematics::int4)>(&::MA::Flora::CellLocation::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803bdb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::int4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CellLocation::*)(int32_t, int32_t, int32_t, int32_t)>(&::MA::Flora::CellLocation::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18149b170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.FromPositionAndSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CellLocation (*)(::Unity::Mathematics::float3, float_t)>(&::MA::Flora::CellLocation::FromPositionAndSize)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18149c940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"FromPositionAndSize", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.FromAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CellLocation (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::MA::Flora::CellLocation::FromAABB)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18149c840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"FromAABB", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.FromAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CellLocation (*)(::MA::Flora::AABB)>(&::MA::Flora::CellLocation::FromAABB)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18149c790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"FromAABB", {}, {::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.FromBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CellLocation (*)(::MA::Flora::BlockLocation, int32_t)>(&::MA::Flora::CellLocation::FromBlock)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18149c8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"FromBlock", {}, {::i2c::type_of<::MA::Flora::BlockLocation>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.get_Coords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::MA::Flora::CellLocation::*)()>(&::MA::Flora::CellLocation::get_Coords)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803bdaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"get_Coords", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.get_Level
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::CellLocation::*)()>(&::MA::Flora::CellLocation::get_Level)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"get_Level", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.get_CellSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::CellLocation::*)()>(&::MA::Flora::CellLocation::get_CellSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18149b220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"get_CellSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.get_Block
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::BlockLocation (::MA::Flora::CellLocation::*)()>(&::MA::Flora::CellLocation::get_Block)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18149b570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"get_Block", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::CellLocation::*)()>(&::MA::Flora::CellLocation::get_Position)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18149b630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.get_AABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AABB (::MA::Flora::CellLocation::*)()>(&::MA::Flora::CellLocation::get_AABB)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18149b1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"get_AABB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.get_PaddedAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AABB (::MA::Flora::CellLocation::*)()>(&::MA::Flora::CellLocation::get_PaddedAABB)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18149b5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"get_PaddedAABB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.GetBlockLocalCellCoords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::MA::Flora::CellLocation::*)()>(&::MA::Flora::CellLocation::GetBlockLocalCellCoords)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18149b450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"GetBlockLocalCellCoords", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.GetIndexInBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::CellLocation::*)()>(&::MA::Flora::CellLocation::GetIndexInBlock)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18149b490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"GetIndexInBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.Distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::MA::Flora::CellLocation, ::MA::Flora::CellLocation)>(&::MA::Flora::CellLocation::Distance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18149c730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"Distance", {}, {::i2c::type_of<::MA::Flora::CellLocation>(), ::i2c::type_of<::MA::Flora::CellLocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CellLocation::*)()>(&::MA::Flora::CellLocation::IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18149b4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CellLocation::*)(::MA::Flora::CellLocation)>(&::MA::Flora::CellLocation::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180645b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::CellLocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CellLocation::*)(::System::Object*)>(&::MA::Flora::CellLocation::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180645ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::CellLocation>(),
                    {::i2c::class_of<::MA::Flora::CellLocation>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::CellLocation::*)()>(&::MA::Flora::CellLocation::GetHashCode)> {
  constexpr static std::size_t size = 0x6320;
  constexpr static std::size_t addrs = 0x1808fb580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::CellLocation>(),
                    {::i2c::class_of<::MA::Flora::CellLocation>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::CellLocation::*)()>(&::MA::Flora::CellLocation::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18149b4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::CellLocation>(),
                    {::i2c::class_of<::MA::Flora::CellLocation>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::CellLocation, ::MA::Flora::CellLocation)>(&::MA::Flora::CellLocation::op_Equality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180645b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::CellLocation>(), ::i2c::type_of<::MA::Flora::CellLocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellLocation.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::CellLocation, ::MA::Flora::CellLocation)>(&::MA::Flora::CellLocation::op_Inequality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18149c1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::CellLocation>(), ::i2c::type_of<::MA::Flora::CellLocation>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::CellLocation::setStaticF_None(::MA::Flora::CellLocation  value)  {
::cordl_internals::setStaticField<::MA::Flora::CellLocation, "None", ::MA::Flora::CellLocation>(std::forward<::MA::Flora::CellLocation>(value));
}
inline ::MA::Flora::CellLocation MA::Flora::CellLocation::getStaticF_None()  {
return ::cordl_internals::getStaticField<::MA::Flora::CellLocation, "None", ::MA::Flora::CellLocation>();
}
inline void MA::Flora::CellLocation::_ctor(::Unity::Mathematics::int4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::int4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void MA::Flora::CellLocation::_ctor(int32_t  x, int32_t  y, int32_t  z, int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z, level);
}
inline ::MA::Flora::CellLocation MA::Flora::CellLocation::FromPositionAndSize(::Unity::Mathematics::float3  position, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"FromPositionAndSize", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CellLocation>(nullptr, ___internal_method, position, size);
}
inline ::MA::Flora::CellLocation MA::Flora::CellLocation::FromAABB(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  extent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"FromAABB", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CellLocation>(nullptr, ___internal_method, center, extent);
}
inline ::MA::Flora::CellLocation MA::Flora::CellLocation::FromAABB(::MA::Flora::AABB  aabb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"FromAABB", {}, {::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CellLocation>(nullptr, ___internal_method, aabb);
}
inline ::MA::Flora::CellLocation MA::Flora::CellLocation::FromBlock(::MA::Flora::BlockLocation  block, int32_t  indexInBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"FromBlock", {}, {::i2c::type_of<::MA::Flora::BlockLocation>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CellLocation>(nullptr, ___internal_method, block, indexInBlock);
}
inline ::Unity::Mathematics::int3 MA::Flora::CellLocation::get_Coords()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"get_Coords", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline int32_t MA::Flora::CellLocation::get_Level()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"get_Level", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline float_t MA::Flora::CellLocation::get_CellSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"get_CellSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::MA::Flora::BlockLocation MA::Flora::CellLocation::get_Block()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"get_Block", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::BlockLocation>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 MA::Flora::CellLocation::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::MA::Flora::AABB MA::Flora::CellLocation::get_AABB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"get_AABB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AABB>(*this, ___internal_method);
}
inline ::MA::Flora::AABB MA::Flora::CellLocation::get_PaddedAABB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"get_PaddedAABB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AABB>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 MA::Flora::CellLocation::GetBlockLocalCellCoords()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"GetBlockLocalCellCoords", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline int32_t MA::Flora::CellLocation::GetIndexInBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"GetIndexInBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MA::Flora::CellLocation::Distance(::MA::Flora::CellLocation  a, ::MA::Flora::CellLocation  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"Distance", {}, {::i2c::type_of<::MA::Flora::CellLocation>(), ::i2c::type_of<::MA::Flora::CellLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline bool MA::Flora::CellLocation::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::CellLocation::Equals(::MA::Flora::CellLocation  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::CellLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::CellLocation::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::CellLocation>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::CellLocation::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::CellLocation>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW MA::Flora::CellLocation::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::CellLocation>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool MA::Flora::CellLocation::op_Equality(::MA::Flora::CellLocation  left, ::MA::Flora::CellLocation  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::CellLocation>(), ::i2c::type_of<::MA::Flora::CellLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool MA::Flora::CellLocation::op_Inequality(::MA::Flora::CellLocation  left, ::MA::Flora::CellLocation  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellLocation>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::CellLocation>(), ::i2c::type_of<::MA::Flora::CellLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::CellLocation>"
constexpr  MA::Flora::CellLocation::operator ::System::IEquatable_1<::MA::Flora::CellLocation>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::CellLocation>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::CellLocation>"
constexpr ::System::IEquatable_1<::MA::Flora::CellLocation>* MA::Flora::CellLocation::i___System__IEquatable_1___MA__Flora__CellLocation_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::CellLocation>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Value", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CellLocation::CellLocation(::Unity::Mathematics::int4  Value) noexcept  {
this->Value = Value;
}
// Ctor Parameters []
constexpr ::MA::Flora::CellLocation::CellLocation()   {
}
