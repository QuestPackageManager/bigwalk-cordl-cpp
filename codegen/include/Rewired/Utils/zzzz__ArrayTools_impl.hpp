#pragma once
// IWYU pragma private; include "Rewired/Utils/ArrayTools.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/zzzz__ArrayTools_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__StringComparison_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.ConvertToIntArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::System::Array*)>(&::Rewired::Utils::ArrayTools::ConvertToIntArray)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181901600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"ConvertToIntArray", {}, {::i2c::type_of<::System::Array*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.ShallowCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&::Rewired::Utils::ArrayTools::ShallowCopy)> {
  constexpr static std::size_t size = 0x37de0;
  constexpr static std::size_t addrs = 0x1806d17d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"ShallowCopy", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.ShallowCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<float_t>, ::ArrayW<float_t>)>(&::Rewired::Utils::ArrayTools::ShallowCopy)> {
  constexpr static std::size_t size = 0x37de0;
  constexpr static std::size_t addrs = 0x1806d17d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"ShallowCopy", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.ShallowCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<bool>, ::ArrayW<bool>)>(&::Rewired::Utils::ArrayTools::ShallowCopy)> {
  constexpr static std::size_t size = 0x37de0;
  constexpr static std::size_t addrs = 0x1806d17d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"ShallowCopy", {}, {::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::ArrayW<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.CopyRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Rewired::Utils::ArrayTools::CopyRange)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181901890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"CopyRange", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.CopyRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::ArrayW<int32_t>, int32_t, int32_t)>(&::Rewired::Utils::ArrayTools::CopyRange)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1819017f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"CopyRange", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.CopyRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (*)(::ArrayW<float_t>, int32_t, int32_t)>(&::Rewired::Utils::ArrayTools::CopyRange)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1819019f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"CopyRange", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.CopyRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::ArrayW<::StringW>, int32_t, int32_t)>(&::Rewired::Utils::ArrayTools::CopyRange)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181901930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"CopyRange", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Rewired::Utils::ArrayTools::Combine)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181901460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"Combine", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&::Rewired::Utils::ArrayTools::Combine)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181901280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"Combine", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (*)(::ArrayW<float_t>, ::ArrayW<float_t>)>(&::Rewired::Utils::ArrayTools::Combine)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181901370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"Combine", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::ArrayW<::StringW>, ::ArrayW<::StringW>)>(&::Rewired::Utils::ArrayTools::Combine)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181901130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"Combine", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.Trim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::StringW>)>(&::Rewired::Utils::ArrayTools::Trim)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819022e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"Trim", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.SortNearToFar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::ArrayW<::UnityEngine::RaycastHit>)>(&::Rewired::Utils::ArrayTools::SortNearToFar)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181901f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"SortNearToFar", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<int32_t>, int32_t)>(&::Rewired::Utils::ArrayTools::IndexOf)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181901ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IndexOf", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<float_t>, float_t)>(&::Rewired::Utils::ArrayTools::IndexOf)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181901bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IndexOf", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<int16_t>, int16_t)>(&::Rewired::Utils::ArrayTools::IndexOf)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181901af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IndexOf", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint16_t>, uint16_t)>(&::Rewired::Utils::ArrayTools::IndexOf)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181901af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IndexOf", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint32_t>, uint32_t)>(&::Rewired::Utils::ArrayTools::IndexOf)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181901ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IndexOf", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<double_t>, double_t)>(&::Rewired::Utils::ArrayTools::IndexOf)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181901a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IndexOf", {}, {::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<bool>, bool)>(&::Rewired::Utils::ArrayTools::IndexOf)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181901b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IndexOf", {}, {::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::StringW>, ::StringW)>(&::Rewired::Utils::ArrayTools::IndexOf)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181901b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IndexOf", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::StringW>, ::StringW, ::System::StringComparison)>(&::Rewired::Utils::ArrayTools::IndexOf)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181901bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IndexOf", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.IsEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Rewired::Utils::ArrayTools::IsEqual)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181901c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IsEqual", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::StringW>, ::StringW, bool)>(&::Rewired::Utils::ArrayTools::Contains)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181901560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"Contains", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.AddIfUnique
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::ArrayW<::StringW>>, ::StringW, bool)>(&::Rewired::Utils::ArrayTools::AddIfUnique)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181901070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"AddIfUnique", {}, {::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.RemoveDuplicates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::ArrayW<::StringW>>, bool)>(&::Rewired::Utils::ArrayTools::RemoveDuplicates)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181901ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"RemoveDuplicates", {}, {::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::ArrayW<::StringW>>, ::StringW, bool)>(&::Rewired::Utils::ArrayTools::Remove)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181901e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"Remove", {}, {::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.ToLowerStripSpaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::ArrayW<::StringW>)>(&::Rewired::Utils::ArrayTools::ToLowerStripSpaces)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181902200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"ToLowerStripSpaces", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ArrayTools.ToBitmask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<bool>, int32_t, int32_t)>(&::Rewired::Utils::ArrayTools::ToBitmask)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181902140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"ToBitmask", {}, {::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<int32_t> Rewired::Utils::ArrayTools::ConvertToIntArray(::System::Array*  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"ConvertToIntArray", {}, {::i2c::type_of<::System::Array*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, array);
}
template<typename T>
inline ::ArrayW<T> Rewired::Utils::ArrayTools::DeepClone(::ArrayW<T>  array)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"DeepClone", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array);
}
template<typename T>
inline ::ArrayW<T> Rewired::Utils::ArrayTools::ShallowCopy(::ArrayW<T>  array)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"ShallowCopy", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array);
}
template<typename T>
inline void Rewired::Utils::ArrayTools::ShallowCopy(::ArrayW<T>  sourceArray, ::ArrayW<T>  targetArray)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"ShallowCopy", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceArray, targetArray);
}
inline void Rewired::Utils::ArrayTools::ShallowCopy(::ArrayW<int32_t>  sourceArray, ::ArrayW<int32_t>  targetArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"ShallowCopy", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceArray, targetArray);
}
inline void Rewired::Utils::ArrayTools::ShallowCopy(::ArrayW<float_t>  sourceArray, ::ArrayW<float_t>  targetArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"ShallowCopy", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceArray, targetArray);
}
inline void Rewired::Utils::ArrayTools::ShallowCopy(::ArrayW<bool>  sourceArray, ::ArrayW<bool>  targetArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"ShallowCopy", {}, {::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::ArrayW<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceArray, targetArray);
}
inline ::ArrayW<uint8_t> Rewired::Utils::ArrayTools::CopyRange(::ArrayW<uint8_t>  inArray, int32_t  startPos, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"CopyRange", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, inArray, startPos, length);
}
inline ::ArrayW<int32_t> Rewired::Utils::ArrayTools::CopyRange(::ArrayW<int32_t>  inArray, int32_t  startPos, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"CopyRange", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, inArray, startPos, length);
}
inline ::ArrayW<float_t> Rewired::Utils::ArrayTools::CopyRange(::ArrayW<float_t>  inArray, int32_t  startPos, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"CopyRange", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(nullptr, ___internal_method, inArray, startPos, length);
}
inline ::ArrayW<::StringW> Rewired::Utils::ArrayTools::CopyRange(::ArrayW<::StringW>  inArray, int32_t  startPos, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"CopyRange", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, inArray, startPos, length);
}
inline ::ArrayW<uint8_t> Rewired::Utils::ArrayTools::Combine(::ArrayW<uint8_t>  inArray1, ::ArrayW<uint8_t>  inArray2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"Combine", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, inArray1, inArray2);
}
inline ::ArrayW<int32_t> Rewired::Utils::ArrayTools::Combine(::ArrayW<int32_t>  inArray1, ::ArrayW<int32_t>  inArray2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"Combine", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, inArray1, inArray2);
}
inline ::ArrayW<float_t> Rewired::Utils::ArrayTools::Combine(::ArrayW<float_t>  inArray1, ::ArrayW<float_t>  inArray2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"Combine", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(nullptr, ___internal_method, inArray1, inArray2);
}
inline ::ArrayW<::StringW> Rewired::Utils::ArrayTools::Combine(::ArrayW<::StringW>  inArray1, ::ArrayW<::StringW>  inArray2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"Combine", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, inArray1, inArray2);
}
template<typename T>
inline ::ArrayW<T> Rewired::Utils::ArrayTools::ParseArray(::StringW  line)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"ParseArray", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, line);
}
template<typename T>
inline ::ArrayW<T> Rewired::Utils::ArrayTools::SortAscending(::ArrayW<T>  array, ::by_ref<::ArrayW<int32_t>>  sortedIndices)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"SortAscending", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array, sortedIndices);
}
template<typename T>
inline ::ArrayW<T> Rewired::Utils::ArrayTools::SortDescending(::ArrayW<T>  array, ::by_ref<::ArrayW<int32_t>>  sortedIndices, bool  ascending)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"SortDescending", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array, sortedIndices, ascending);
}
template<typename T>
inline int32_t Rewired::Utils::ArrayTools::Add(::by_ref<::ArrayW<T>>  array, T  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Add", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, item);
}
template<typename T>
inline int32_t Rewired::Utils::ArrayTools::AddIfUnique(::by_ref<::ArrayW<T>>  array, T  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"AddIfUnique", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, item);
}
template<typename T>
inline int32_t Rewired::Utils::ArrayTools::Insert(::by_ref<::ArrayW<T>>  array, int32_t  index, T  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Insert", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, index, item);
}
template<typename T>
inline bool Rewired::Utils::ArrayTools::RemoveAt(::by_ref<::ArrayW<T>>  array, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"RemoveAt", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, index);
}
template<typename T>
inline bool Rewired::Utils::ArrayTools::Remove(::by_ref<::ArrayW<T>>  array, T  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Remove", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, item);
}
template<typename T>
inline void Rewired::Utils::ArrayTools::Combine(::by_ref<::ArrayW<T>>  array1, ::ArrayW<T>  array2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Combine", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array1, array2);
}
template<typename T>
inline ::ArrayW<T> Rewired::Utils::ArrayTools::Add(::ArrayW<T>  array, T  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Add", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array, item);
}
template<typename T>
inline ::ArrayW<T> Rewired::Utils::ArrayTools::AddIfUnique(::ArrayW<T>  array, T  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"AddIfUnique", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array, item);
}
template<typename T>
inline ::ArrayW<T> Rewired::Utils::ArrayTools::Insert(::ArrayW<T>  array, int32_t  index, T  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Insert", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array, index, item);
}
template<typename T>
inline ::ArrayW<T> Rewired::Utils::ArrayTools::RemoveAt(::ArrayW<T>  array, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"RemoveAt", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array, index);
}
template<typename T>
inline ::ArrayW<T> Rewired::Utils::ArrayTools::Remove(::ArrayW<T>  array, T  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Remove", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array, item);
}
template<typename T>
inline ::ArrayW<T> Rewired::Utils::ArrayTools::Combine(::ArrayW<T>  array1, ::ArrayW<T>  array2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Combine", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array1, array2);
}
template<typename T>
inline int32_t Rewired::Utils::ArrayTools::IndexOf(::ArrayW<T>  array, T  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"IndexOf", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, item);
}
template<typename T>
inline bool Rewired::Utils::ArrayTools::Contains(::ArrayW<T>  array, T  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Contains", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, item);
}
template<typename T>
inline T Rewired::Utils::ArrayTools::Find(::ArrayW<T>  array, ::System::Predicate_1<T>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Find", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Predicate_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, array, predicate);
}
template<typename T>
inline bool Rewired::Utils::ArrayTools::SubArray(::by_ref<::ArrayW<T>>  array, int32_t  startIndex)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"SubArray", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, startIndex);
}
template<typename T>
inline bool Rewired::Utils::ArrayTools::SubArray(::by_ref<::ArrayW<T>>  array, int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"SubArray", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, startIndex, count);
}
template<typename T>
inline void Rewired::Utils::ArrayTools::Expand(::by_ref<::ArrayW<T>>  array, int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Expand", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, length);
}
inline void Rewired::Utils::ArrayTools::Trim(::ArrayW<::StringW>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"Trim", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array);
}
inline ::ArrayW<::UnityEngine::RaycastHit> Rewired::Utils::ArrayTools::SortNearToFar(::ArrayW<::UnityEngine::RaycastHit>  hits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"SortNearToFar", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, hits);
}
template<typename T>
inline void Rewired::Utils::ArrayTools::MoveEntryUp(::ArrayW<T>  array, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"MoveEntryUp", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index);
}
template<typename T>
inline void Rewired::Utils::ArrayTools::MoveEntryDown(::ArrayW<T>  array, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"MoveEntryDown", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index);
}
template<typename T>
inline void Rewired::Utils::ArrayTools::Compact(::by_ref<::ArrayW<T>>  array)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Compact", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array);
}
inline int32_t Rewired::Utils::ArrayTools::IndexOf(::ArrayW<int32_t>  array, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IndexOf", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
inline int32_t Rewired::Utils::ArrayTools::IndexOf(::ArrayW<float_t>  array, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IndexOf", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
inline int32_t Rewired::Utils::ArrayTools::IndexOf(::ArrayW<int16_t>  array, int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IndexOf", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
inline int32_t Rewired::Utils::ArrayTools::IndexOf(::ArrayW<uint16_t>  array, uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IndexOf", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
inline int32_t Rewired::Utils::ArrayTools::IndexOf(::ArrayW<uint32_t>  array, uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IndexOf", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
inline int32_t Rewired::Utils::ArrayTools::IndexOf(::ArrayW<double_t>  array, double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IndexOf", {}, {::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
inline int32_t Rewired::Utils::ArrayTools::IndexOf(::ArrayW<bool>  array, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IndexOf", {}, {::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
inline int32_t Rewired::Utils::ArrayTools::IndexOf(::ArrayW<::StringW>  array, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IndexOf", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
inline int32_t Rewired::Utils::ArrayTools::IndexOf(::ArrayW<::StringW>  array, ::StringW  value, ::System::StringComparison  stringComparison)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IndexOf", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value, stringComparison);
}
template<typename T>
inline void Rewired::Utils::ArrayTools::Fill(::ArrayW<T>  array, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Fill", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, value);
}
template<typename T>
inline void Rewired::Utils::ArrayTools::Fill(::ArrayW<T>  array, T  value, int32_t  startIndex)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Fill", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, value, startIndex);
}
template<typename T>
inline void Rewired::Utils::ArrayTools::Fill(::ArrayW<T>  array, T  value, int32_t  startIndex, int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Fill", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, value, startIndex, length);
}
template<typename T>
inline void Rewired::Utils::ArrayTools::Populate(::ArrayW<T>  array, int32_t  startIndex, int32_t  length, ::System::Func_1<T>*  instantiator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Populate", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, startIndex, length, instantiator);
}
template<typename T>
inline void Rewired::Utils::ArrayTools::Populate(::ArrayW<T>  array, int32_t  startIndex, int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Populate", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, startIndex, length);
}
template<typename T>
inline void Rewired::Utils::ArrayTools::Populate(::ArrayW<T>  array)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Populate", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array);
}
template<typename T>
inline void Rewired::Utils::ArrayTools::Populate(::ArrayW<T>  array, ::System::Func_1<T>*  instantiator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Populate", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Func_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, instantiator);
}
template<typename T>
inline int32_t Rewired::Utils::ArrayTools::Count(::ArrayW<T>  array, ::System::Predicate_1<T>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"Count", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Predicate_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, predicate);
}
inline bool Rewired::Utils::ArrayTools::IsEqual(::ArrayW<uint8_t>  a1, ::ArrayW<uint8_t>  a2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"IsEqual", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a1, a2);
}
inline bool Rewired::Utils::ArrayTools::Contains(::ArrayW<::StringW>  array, ::StringW  item, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"Contains", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, item, ignoreCase);
}
inline int32_t Rewired::Utils::ArrayTools::AddIfUnique(::by_ref<::ArrayW<::StringW>>  array, ::StringW  item, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"AddIfUnique", {}, {::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, item, ignoreCase);
}
inline void Rewired::Utils::ArrayTools::RemoveDuplicates(::by_ref<::ArrayW<::StringW>>  array, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"RemoveDuplicates", {}, {::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, ignoreCase);
}
inline bool Rewired::Utils::ArrayTools::Remove(::by_ref<::ArrayW<::StringW>>  array, ::StringW  item, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"Remove", {}, {::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, item, ignoreCase);
}
inline ::ArrayW<::StringW> Rewired::Utils::ArrayTools::ToLowerStripSpaces(::ArrayW<::StringW>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"ToLowerStripSpaces", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, array);
}
inline int32_t Rewired::Utils::ArrayTools::ToBitmask(::ArrayW<bool>  array, int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                        {"ToBitmask", {}, {::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, startIndex, count);
}
template<typename T>
inline bool Rewired::Utils::ArrayTools::IsNullOrEmpty(::ArrayW<T>  array)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::ArrayTools*>(),
                    {"IsNullOrEmpty", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array);
}
// Ctor Parameters []
constexpr ::Rewired::Utils::ArrayTools::ArrayTools()   {
}
