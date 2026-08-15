#pragma once
// IWYU pragma private; include "Unity/Mathematics/Random.hpp"
#include "Unity/Mathematics/zzzz__Random_def.hpp"
#include "Unity/Mathematics/zzzz__bool2_def.hpp"
#include "Unity/Mathematics/zzzz__bool3_def.hpp"
#include "Unity/Mathematics/zzzz__bool4_def.hpp"
#include "Unity/Mathematics/zzzz__double2_def.hpp"
#include "Unity/Mathematics/zzzz__double3_def.hpp"
#include "Unity/Mathematics/zzzz__double4_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "Unity/Mathematics/zzzz__uint2_def.hpp"
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::Random._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::Random::*)(uint32_t)>(&::Unity::Mathematics::Random::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181405440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.CreateFromIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::Random (*)(uint32_t)>(&::Unity::Mathematics::Random::CreateFromIndex)> {
  constexpr static std::size_t size = 0x960;
  constexpr static std::size_t addrs = 0x181fa7890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"CreateFromIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.WangHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::Unity::Mathematics::Random::WangHash)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fa81f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"WangHash", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.InitState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::Random::*)(uint32_t)>(&::Unity::Mathematics::Random::InitState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181405440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"InitState", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextBool)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fa38c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextBool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextBool2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextBool2)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181fa3750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextBool2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextBool3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextBool3)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fa37e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextBool3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextBool4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextBool4)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181fa3830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextBool4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextInt)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fa5150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextInt2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextInt2)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181fa4ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextInt3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextInt3)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181fa4cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextInt4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextInt4)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181fa5040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::Random::*)(int32_t)>(&::Unity::Mathematics::Random::NextInt)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fa5120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextInt2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::int2)>(&::Unity::Mathematics::Random::NextInt2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181fa4a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt2", {}, {::i2c::type_of<::Unity::Mathematics::int2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextInt3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::int3)>(&::Unity::Mathematics::Random::NextInt3)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181fa4c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt3", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextInt4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::int4)>(&::Unity::Mathematics::Random::NextInt4)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181fa4f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt4", {}, {::i2c::type_of<::Unity::Mathematics::int4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::Random::*)(int32_t, int32_t)>(&::Unity::Mathematics::Random::NextInt)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fa50f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextInt2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int2 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::int2, ::Unity::Mathematics::int2)>(&::Unity::Mathematics::Random::NextInt2)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181fa4b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt2", {}, {::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::int2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextInt3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::Unity::Mathematics::Random::NextInt3)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181fa4d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt3", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextInt4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::int4, ::Unity::Mathematics::int4)>(&::Unity::Mathematics::Random::NextInt4)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181fa4e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt4", {}, {::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextUInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextUInt)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fa58d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextUInt2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextUInt2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181fa5470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextUInt3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextUInt3)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181fa5580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextUInt4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextUInt4)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181fa5720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextUInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Unity::Mathematics::Random::*)(uint32_t)>(&::Unity::Mathematics::Random::NextUInt)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fa58a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextUInt2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::uint2)>(&::Unity::Mathematics::Random::NextUInt2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181fa5340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt2", {}, {::i2c::type_of<::Unity::Mathematics::uint2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextUInt3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::uint3)>(&::Unity::Mathematics::Random::NextUInt3)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181fa54e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt3", {}, {::i2c::type_of<::Unity::Mathematics::uint3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextUInt4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::uint4)>(&::Unity::Mathematics::Random::NextUInt4)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181fa57d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt4", {}, {::i2c::type_of<::Unity::Mathematics::uint4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextUInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Unity::Mathematics::Random::*)(uint32_t, uint32_t)>(&::Unity::Mathematics::Random::NextUInt)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fa50f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextUInt2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::uint2, ::Unity::Mathematics::uint2)>(&::Unity::Mathematics::Random::NextUInt2)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181fa53b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt2", {}, {::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextUInt3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3)>(&::Unity::Mathematics::Random::NextUInt3)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181fa4d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt3", {}, {::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextUInt4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint4 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::uint4, ::Unity::Mathematics::uint4)>(&::Unity::Mathematics::Random::NextUInt4)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181fa5600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt4", {}, {::i2c::type_of<::Unity::Mathematics::uint4>(), ::i2c::type_of<::Unity::Mathematics::uint4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextFloat)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181405630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextFloat2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextFloat2)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181fa46c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextFloat3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextFloat3)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814182c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextFloat4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextFloat4)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181405540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Mathematics::Random::*)(float_t)>(&::Unity::Mathematics::Random::NextFloat)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814055f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextFloat2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::Random::NextFloat2)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181fa4600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat2", {}, {::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextFloat3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::Random::NextFloat3)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181fa48b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat3", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextFloat4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::Random::NextFloat4)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181fa4990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat4", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Mathematics::Random::*)(float_t, float_t)>(&::Unity::Mathematics::Random::NextFloat)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181418490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextFloat2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::Random::NextFloat2)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181fa4520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat2", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextFloat3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::Random::NextFloat3)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181418380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat3", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextFloat4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4)>(&::Unity::Mathematics::Random::NextFloat4)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181405460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat4", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextDouble)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181fa43c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextDouble2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextDouble2)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181fa3a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextDouble3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextDouble3)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181fa3df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextDouble4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextDouble4)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181fa4060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Unity::Mathematics::Random::*)(double_t)>(&::Unity::Mathematics::Random::NextDouble)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181fa4420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextDouble2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::double2)>(&::Unity::Mathematics::Random::NextDouble2)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181fa3990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble2", {}, {::i2c::type_of<::Unity::Mathematics::double2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextDouble3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::double3)>(&::Unity::Mathematics::Random::NextDouble3)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181fa3f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble3", {}, {::i2c::type_of<::Unity::Mathematics::double3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextDouble4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::double4)>(&::Unity::Mathematics::Random::NextDouble4)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181fa42d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble4", {}, {::i2c::type_of<::Unity::Mathematics::double4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Unity::Mathematics::Random::*)(double_t, double_t)>(&::Unity::Mathematics::Random::NextDouble)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181fa4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextDouble2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::double2, ::Unity::Mathematics::double2)>(&::Unity::Mathematics::Random::NextDouble2)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181fa3b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble2", {}, {::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextDouble3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::double3, ::Unity::Mathematics::double3)>(&::Unity::Mathematics::Random::NextDouble3)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181fa3f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble3", {}, {::i2c::type_of<::Unity::Mathematics::double3>(), ::i2c::type_of<::Unity::Mathematics::double3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextDouble4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double4 (::Unity::Mathematics::Random::*)(::Unity::Mathematics::double4, ::Unity::Mathematics::double4)>(&::Unity::Mathematics::Random::NextDouble4)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181fa41e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble4", {}, {::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextFloat2Direction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextFloat2Direction)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181fa4490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat2Direction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextDouble2Direction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double2 (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextDouble2Direction)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181fa38f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble2Direction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextFloat3Direction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextFloat3Direction)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181fa4760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat3Direction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextDouble3Direction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::double3 (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextDouble3Direction)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181fa3c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble3Direction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextQuaternionRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextQuaternionRotation)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181fa5180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextQuaternionRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181405670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.CheckInitState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::CheckInitState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"CheckInitState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.CheckIndexForHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t)>(&::Unity::Mathematics::Random::CheckIndexForHash)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fa7870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"CheckIndexForHash", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.CheckState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::CheckState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"CheckState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.CheckNextIntMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::Random::*)(int32_t)>(&::Unity::Mathematics::Random::CheckNextIntMax)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"CheckNextIntMax", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.CheckNextIntMinMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::Random::*)(int32_t, int32_t)>(&::Unity::Mathematics::Random::CheckNextIntMinMax)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"CheckNextIntMinMax", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.CheckNextUIntMinMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::Random::*)(uint32_t, uint32_t)>(&::Unity::Mathematics::Random::CheckNextUIntMinMax)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"CheckNextUIntMinMax", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::Random::_ctor(uint32_t  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, seed);
}
inline ::Unity::Mathematics::Random Unity::Mathematics::Random::CreateFromIndex(uint32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"CreateFromIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::Random>(nullptr, ___internal_method, index);
}
inline uint32_t Unity::Mathematics::Random::WangHash(uint32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"WangHash", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, n);
}
inline void Unity::Mathematics::Random::InitState(uint32_t  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"InitState", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, seed);
}
inline bool Unity::Mathematics::Random::NextBool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextBool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Unity::Mathematics::bool2 Unity::Mathematics::Random::NextBool2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextBool2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::bool3 Unity::Mathematics::Random::NextBool3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextBool3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::bool4 Unity::Mathematics::Random::NextBool4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextBool4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(*this, ___internal_method);
}
inline int32_t Unity::Mathematics::Random::NextInt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::Random::NextInt2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::Random::NextInt3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::Random::NextInt4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method);
}
inline int32_t Unity::Mathematics::Random::NextInt(int32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, max);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::Random::NextInt2(::Unity::Mathematics::int2  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt2", {}, {::i2c::type_of<::Unity::Mathematics::int2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method, max);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::Random::NextInt3(::Unity::Mathematics::int3  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt3", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method, max);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::Random::NextInt4(::Unity::Mathematics::int4  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt4", {}, {::i2c::type_of<::Unity::Mathematics::int4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method, max);
}
inline int32_t Unity::Mathematics::Random::NextInt(int32_t  min, int32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, min, max);
}
inline ::Unity::Mathematics::int2 Unity::Mathematics::Random::NextInt2(::Unity::Mathematics::int2  min, ::Unity::Mathematics::int2  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt2", {}, {::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::int2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int2>(*this, ___internal_method, min, max);
}
inline ::Unity::Mathematics::int3 Unity::Mathematics::Random::NextInt3(::Unity::Mathematics::int3  min, ::Unity::Mathematics::int3  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt3", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(*this, ___internal_method, min, max);
}
inline ::Unity::Mathematics::int4 Unity::Mathematics::Random::NextInt4(::Unity::Mathematics::int4  min, ::Unity::Mathematics::int4  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt4", {}, {::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::int4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(*this, ___internal_method, min, max);
}
inline uint32_t Unity::Mathematics::Random::NextUInt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::Random::NextUInt2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::Random::NextUInt3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::Random::NextUInt4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method);
}
inline uint32_t Unity::Mathematics::Random::NextUInt(uint32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, max);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::Random::NextUInt2(::Unity::Mathematics::uint2  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt2", {}, {::i2c::type_of<::Unity::Mathematics::uint2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(*this, ___internal_method, max);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::Random::NextUInt3(::Unity::Mathematics::uint3  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt3", {}, {::i2c::type_of<::Unity::Mathematics::uint3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method, max);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::Random::NextUInt4(::Unity::Mathematics::uint4  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt4", {}, {::i2c::type_of<::Unity::Mathematics::uint4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method, max);
}
inline uint32_t Unity::Mathematics::Random::NextUInt(uint32_t  min, uint32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, min, max);
}
inline ::Unity::Mathematics::uint2 Unity::Mathematics::Random::NextUInt2(::Unity::Mathematics::uint2  min, ::Unity::Mathematics::uint2  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt2", {}, {::i2c::type_of<::Unity::Mathematics::uint2>(), ::i2c::type_of<::Unity::Mathematics::uint2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(*this, ___internal_method, min, max);
}
inline ::Unity::Mathematics::uint3 Unity::Mathematics::Random::NextUInt3(::Unity::Mathematics::uint3  min, ::Unity::Mathematics::uint3  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt3", {}, {::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(*this, ___internal_method, min, max);
}
inline ::Unity::Mathematics::uint4 Unity::Mathematics::Random::NextUInt4(::Unity::Mathematics::uint4  min, ::Unity::Mathematics::uint4  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextUInt4", {}, {::i2c::type_of<::Unity::Mathematics::uint4>(), ::i2c::type_of<::Unity::Mathematics::uint4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint4>(*this, ___internal_method, min, max);
}
inline float_t Unity::Mathematics::Random::NextFloat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::Random::NextFloat2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::Random::NextFloat3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::Random::NextFloat4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline float_t Unity::Mathematics::Random::NextFloat(float_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, max);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::Random::NextFloat2(::Unity::Mathematics::float2  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat2", {}, {::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method, max);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::Random::NextFloat3(::Unity::Mathematics::float3  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat3", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, max);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::Random::NextFloat4(::Unity::Mathematics::float4  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat4", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method, max);
}
inline float_t Unity::Mathematics::Random::NextFloat(float_t  min, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, min, max);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::Random::NextFloat2(::Unity::Mathematics::float2  min, ::Unity::Mathematics::float2  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat2", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method, min, max);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::Random::NextFloat3(::Unity::Mathematics::float3  min, ::Unity::Mathematics::float3  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat3", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, min, max);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::Random::NextFloat4(::Unity::Mathematics::float4  min, ::Unity::Mathematics::float4  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat4", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method, min, max);
}
inline double_t Unity::Mathematics::Random::NextDouble()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::Random::NextDouble2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::Random::NextDouble3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::Random::NextDouble4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method);
}
inline double_t Unity::Mathematics::Random::NextDouble(double_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method, max);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::Random::NextDouble2(::Unity::Mathematics::double2  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble2", {}, {::i2c::type_of<::Unity::Mathematics::double2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method, max);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::Random::NextDouble3(::Unity::Mathematics::double3  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble3", {}, {::i2c::type_of<::Unity::Mathematics::double3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method, max);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::Random::NextDouble4(::Unity::Mathematics::double4  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble4", {}, {::i2c::type_of<::Unity::Mathematics::double4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method, max);
}
inline double_t Unity::Mathematics::Random::NextDouble(double_t  min, double_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method, min, max);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::Random::NextDouble2(::Unity::Mathematics::double2  min, ::Unity::Mathematics::double2  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble2", {}, {::i2c::type_of<::Unity::Mathematics::double2>(), ::i2c::type_of<::Unity::Mathematics::double2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method, min, max);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::Random::NextDouble3(::Unity::Mathematics::double3  min, ::Unity::Mathematics::double3  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble3", {}, {::i2c::type_of<::Unity::Mathematics::double3>(), ::i2c::type_of<::Unity::Mathematics::double3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method, min, max);
}
inline ::Unity::Mathematics::double4 Unity::Mathematics::Random::NextDouble4(::Unity::Mathematics::double4  min, ::Unity::Mathematics::double4  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble4", {}, {::i2c::type_of<::Unity::Mathematics::double4>(), ::i2c::type_of<::Unity::Mathematics::double4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double4>(*this, ___internal_method, min, max);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::Random::NextFloat2Direction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat2Direction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double2 Unity::Mathematics::Random::NextDouble2Direction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble2Direction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double2>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::Random::NextFloat3Direction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat3Direction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::double3 Unity::Mathematics::Random::NextDouble3Direction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble3Direction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::double3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::Random::NextQuaternionRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextQuaternionRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(*this, ___internal_method);
}
inline uint32_t Unity::Mathematics::Random::NextState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Unity::Mathematics::Random::CheckInitState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"CheckInitState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Mathematics::Random::CheckIndexForHash(uint32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"CheckIndexForHash", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index);
}
inline void Unity::Mathematics::Random::CheckState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"CheckState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Mathematics::Random::CheckNextIntMax(int32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"CheckNextIntMax", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, max);
}
inline void Unity::Mathematics::Random::CheckNextIntMinMax(int32_t  min, int32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"CheckNextIntMinMax", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, min, max);
}
inline void Unity::Mathematics::Random::CheckNextUIntMinMax(uint32_t  min, uint32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"CheckNextUIntMinMax", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, min, max);
}
// Ctor Parameters [CppParam { name: "state", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Mathematics::Random::Random(uint32_t  state) noexcept  {
this->state = state;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::Random::Random()   {
}
