#pragma once
// IWYU pragma private; include "MA/Flora/BlockLocation.hpp"
#include "Unity/Mathematics/zzzz__int4_impl.hpp"
#include "MA/Flora/zzzz__BlockLocation_def.hpp"
#include "MA/Flora/zzzz__AABB_def.hpp"
#include "MA/Flora/zzzz__CellIndex_def.hpp"
#include "MA/Flora/zzzz__CellLocation_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "Unity/Mathematics/zzzz__int4_def.hpp"
//  Writing Method size for method: ::MA::Flora::BlockLocation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::BlockLocation::*)(::Unity::Mathematics::int4)>(&::MA::Flora::BlockLocation::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803bdb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::int4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::BlockLocation::*)(int32_t, int32_t, int32_t, int32_t)>(&::MA::Flora::BlockLocation::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18149b170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.FromPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::BlockLocation (*)(::Unity::Mathematics::float3, float_t)>(&::MA::Flora::BlockLocation::FromPosition)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x18149bf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"FromPosition", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.FromAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::BlockLocation (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::MA::Flora::BlockLocation::FromAABB)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18149be40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"FromAABB", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.FromAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::BlockLocation (*)(::MA::Flora::AABB)>(&::MA::Flora::BlockLocation::FromAABB)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18149bd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"FromAABB", {}, {::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.get_Coords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::MA::Flora::BlockLocation::*)()>(&::MA::Flora::BlockLocation::get_Coords)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803bdaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"get_Coords", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.get_Level
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::BlockLocation::*)()>(&::MA::Flora::BlockLocation::get_Level)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"get_Level", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.get_BlockSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::BlockLocation::*)()>(&::MA::Flora::BlockLocation::get_BlockSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18149b220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"get_BlockSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.get_CellSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::BlockLocation::*)()>(&::MA::Flora::BlockLocation::get_CellSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18149b240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"get_CellSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::BlockLocation::*)()>(&::MA::Flora::BlockLocation::get_Position)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18149b390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.get_Center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::BlockLocation::*)()>(&::MA::Flora::BlockLocation::get_Center)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18149b260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"get_Center", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.get_AABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AABB (::MA::Flora::BlockLocation::*)()>(&::MA::Flora::BlockLocation::get_AABB)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18149b1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"get_AABB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.get_PaddedAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AABB (::MA::Flora::BlockLocation::*)()>(&::MA::Flora::BlockLocation::get_PaddedAABB)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18149b2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"get_PaddedAABB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.GetLocalCellCoord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::MA::Flora::BlockLocation::*)(::MA::Flora::CellLocation)>(&::MA::Flora::BlockLocation::GetLocalCellCoord)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18149b050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"GetLocalCellCoord", {}, {::i2c::type_of<::MA::Flora::CellLocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.GetLocalCellCoord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::MA::Flora::BlockLocation::*)(int32_t)>(&::MA::Flora::BlockLocation::GetLocalCellCoord)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18149b0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"GetLocalCellCoord", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.GetLocalCellCoord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::MA::Flora::BlockLocation::*)(::MA::Flora::CellIndex)>(&::MA::Flora::BlockLocation::GetLocalCellCoord)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18149b020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"GetLocalCellCoord", {}, {::i2c::type_of<::MA::Flora::CellIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::BlockLocation::*)()>(&::MA::Flora::BlockLocation::IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18149b0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::BlockLocation::*)(::MA::Flora::BlockLocation)>(&::MA::Flora::BlockLocation::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180645b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::BlockLocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::BlockLocation::*)(::System::Object*)>(&::MA::Flora::BlockLocation::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180673fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::BlockLocation>(),
                    {::i2c::class_of<::MA::Flora::BlockLocation>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::BlockLocation::*)()>(&::MA::Flora::BlockLocation::GetHashCode)> {
  constexpr static std::size_t size = 0x6320;
  constexpr static std::size_t addrs = 0x1808fb580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::BlockLocation>(),
                    {::i2c::class_of<::MA::Flora::BlockLocation>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::BlockLocation::*)()>(&::MA::Flora::BlockLocation::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18149b0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::BlockLocation>(),
                    {::i2c::class_of<::MA::Flora::BlockLocation>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::BlockLocation, ::MA::Flora::BlockLocation)>(&::MA::Flora::BlockLocation::op_Equality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180645b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::BlockLocation>(), ::i2c::type_of<::MA::Flora::BlockLocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BlockLocation.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::BlockLocation, ::MA::Flora::BlockLocation)>(&::MA::Flora::BlockLocation::op_Inequality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18149c1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::BlockLocation>(), ::i2c::type_of<::MA::Flora::BlockLocation>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::BlockLocation::setStaticF_None(::MA::Flora::BlockLocation  value)  {
::cordl_internals::setStaticField<::MA::Flora::BlockLocation, "None", ::MA::Flora::BlockLocation>(std::forward<::MA::Flora::BlockLocation>(value));
}
inline ::MA::Flora::BlockLocation MA::Flora::BlockLocation::getStaticF_None()  {
return ::cordl_internals::getStaticField<::MA::Flora::BlockLocation, "None", ::MA::Flora::BlockLocation>();
}
inline void MA::Flora::BlockLocation::_ctor(::Unity::Mathematics::int4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::int4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void MA::Flora::BlockLocation::_ctor(int32_t  x, int32_t  y, int32_t  z, int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z, level);
}
inline ::MA::Flora::BlockLocation MA::Flora::BlockLocation::FromPosition(::Unity::Mathematics::float3  position, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"FromPosition", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::BlockLocation>(nullptr, ___internal_method, position, size);
}
inline ::MA::Flora::BlockLocation MA::Flora::BlockLocation::FromAABB(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  extent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"FromAABB", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::BlockLocation>(nullptr, ___internal_method, center, extent);
}
inline ::MA::Flora::BlockLocation MA::Flora::BlockLocation::FromAABB(::MA::Flora::AABB  aabb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"FromAABB", {}, {::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::BlockLocation>(nullptr, ___internal_method, aabb);
}
inline ::Unity::Mathematics::int3 MA::Flora::BlockLocation::get_Coords()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"get_Coords", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline int32_t MA::Flora::BlockLocation::get_Level()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"get_Level", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline float_t MA::Flora::BlockLocation::get_BlockSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"get_BlockSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t MA::Flora::BlockLocation::get_CellSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"get_CellSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 MA::Flora::BlockLocation::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 MA::Flora::BlockLocation::get_Center()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"get_Center", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::MA::Flora::AABB MA::Flora::BlockLocation::get_AABB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"get_AABB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AABB>(*this, ___internal_method);
}
inline ::MA::Flora::AABB MA::Flora::BlockLocation::get_PaddedAABB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"get_PaddedAABB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AABB>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 MA::Flora::BlockLocation::GetLocalCellCoord(::MA::Flora::CellLocation  location)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"GetLocalCellCoord", {}, {::i2c::type_of<::MA::Flora::CellLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method, location);
}
inline ::Unity::Mathematics::int3 MA::Flora::BlockLocation::GetLocalCellCoord(int32_t  indexInBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"GetLocalCellCoord", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method, indexInBlock);
}
inline ::Unity::Mathematics::int3 MA::Flora::BlockLocation::GetLocalCellCoord(::MA::Flora::CellIndex  cellIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"GetLocalCellCoord", {}, {::i2c::type_of<::MA::Flora::CellIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method, cellIndex);
}
inline bool MA::Flora::BlockLocation::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::BlockLocation::Equals(::MA::Flora::BlockLocation  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::BlockLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::BlockLocation::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::BlockLocation>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::BlockLocation::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::BlockLocation>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW MA::Flora::BlockLocation::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::BlockLocation>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool MA::Flora::BlockLocation::op_Equality(::MA::Flora::BlockLocation  left, ::MA::Flora::BlockLocation  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::BlockLocation>(), ::i2c::type_of<::MA::Flora::BlockLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool MA::Flora::BlockLocation::op_Inequality(::MA::Flora::BlockLocation  left, ::MA::Flora::BlockLocation  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BlockLocation>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::BlockLocation>(), ::i2c::type_of<::MA::Flora::BlockLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::BlockLocation>"
constexpr  MA::Flora::BlockLocation::operator ::System::IEquatable_1<::MA::Flora::BlockLocation>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::BlockLocation>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::BlockLocation>"
constexpr ::System::IEquatable_1<::MA::Flora::BlockLocation>* MA::Flora::BlockLocation::i___System__IEquatable_1___MA__Flora__BlockLocation_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::BlockLocation>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Value", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::BlockLocation::BlockLocation(::Unity::Mathematics::int4  Value) noexcept  {
this->Value = Value;
}
// Ctor Parameters []
constexpr ::MA::Flora::BlockLocation::BlockLocation()   {
}
