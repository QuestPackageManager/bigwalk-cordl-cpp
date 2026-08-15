#pragma once
// IWYU pragma private; include "GlobalNamespace/SingleCellDensity2D.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__SingleCellDensity2D_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SingleCellDensity2D.get_CellSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SingleCellDensity2D::*)()>(&::GlobalNamespace::SingleCellDensity2D::get_CellSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"get_CellSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SingleCellDensity2D.set_CellSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SingleCellDensity2D::*)(float_t)>(&::GlobalNamespace::SingleCellDensity2D::set_CellSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"set_CellSize", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SingleCellDensity2D.get_Origin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::SingleCellDensity2D::*)()>(&::GlobalNamespace::SingleCellDensity2D::get_Origin)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"get_Origin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SingleCellDensity2D.set_Origin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SingleCellDensity2D::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::SingleCellDensity2D::set_Origin)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"set_Origin", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SingleCellDensity2D.Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t, int32_t)>(&::GlobalNamespace::SingleCellDensity2D::Key)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803469b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"Key", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SingleCellDensity2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SingleCellDensity2D::*)(float_t, ::UnityEngine::Vector2)>(&::GlobalNamespace::SingleCellDensity2D::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180346a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SingleCellDensity2D.BuildFromSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SingleCellDensity2D::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*)>(&::GlobalNamespace::SingleCellDensity2D::BuildFromSamples)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180346490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"BuildFromSamples", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SingleCellDensity2D.AddSample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SingleCellDensity2D::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::SingleCellDensity2D::AddSample)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803463e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"AddSample", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SingleCellDensity2D.DensityAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SingleCellDensity2D::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::SingleCellDensity2D::DensityAt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180346920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"DensityAt", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SingleCellDensity2D.DensitiesForAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SingleCellDensity2D::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<int32_t>*)>(&::GlobalNamespace::SingleCellDensity2D::DensitiesForAll)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1803466b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"DensitiesForAll", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SingleCellDensity2D.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SingleCellDensity2D::*)()>(&::GlobalNamespace::SingleCellDensity2D::Clear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180346690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SingleCellDensity2D.ResetGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SingleCellDensity2D::*)(float_t, ::UnityEngine::Vector2)>(&::GlobalNamespace::SingleCellDensity2D::ResetGrid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803469c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"ResetGrid", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SingleCellDensity2D::__cordl_internal_get__CellSize_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CellSize_k__BackingField;
}
constexpr float_t const& GlobalNamespace::SingleCellDensity2D::__cordl_internal_get__CellSize_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CellSize_k__BackingField;
}
constexpr void GlobalNamespace::SingleCellDensity2D::__cordl_internal_set__CellSize_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CellSize_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::SingleCellDensity2D::__cordl_internal_get__Origin_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Origin_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::SingleCellDensity2D::__cordl_internal_get__Origin_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Origin_k__BackingField;
}
constexpr void GlobalNamespace::SingleCellDensity2D::__cordl_internal_set__Origin_k__BackingField(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Origin_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,int32_t>*& GlobalNamespace::SingleCellDensity2D::__cordl_internal_get__counts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____counts;
}
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,int32_t>* const& GlobalNamespace::SingleCellDensity2D::__cordl_internal_get__counts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____counts;
}
constexpr void GlobalNamespace::SingleCellDensity2D::__cordl_internal_set__counts(::System::Collections::Generic::Dictionary_2<int64_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____counts = value;
}
inline float_t GlobalNamespace::SingleCellDensity2D::get_CellSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"get_CellSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SingleCellDensity2D::set_CellSize(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"set_CellSize", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 GlobalNamespace::SingleCellDensity2D::get_Origin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"get_Origin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void GlobalNamespace::SingleCellDensity2D::set_Origin(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"set_Origin", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t GlobalNamespace::SingleCellDensity2D::Key(int32_t  ix, int32_t  iy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"Key", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, ix, iy);
}
inline void GlobalNamespace::SingleCellDensity2D::_ctor(float_t  cellsize, ::UnityEngine::Vector2  origin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cellsize, origin);
}
inline void GlobalNamespace::SingleCellDensity2D::BuildFromSamples(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*  samples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"BuildFromSamples", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samples);
}
inline void GlobalNamespace::SingleCellDensity2D::AddSample(::UnityEngine::Vector2  sample)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"AddSample", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sample);
}
inline int32_t GlobalNamespace::SingleCellDensity2D::DensityAt(::UnityEngine::Vector2  testPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"DensityAt", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, testPoint);
}
inline void GlobalNamespace::SingleCellDensity2D::DensitiesForAll(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*  testPoints, ::System::Collections::Generic::IList_1<int32_t>*  outDensities)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"DensitiesForAll", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, testPoints, outDensities);
}
inline void GlobalNamespace::SingleCellDensity2D::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SingleCellDensity2D::ResetGrid(float_t  cellsize, ::UnityEngine::Vector2  origin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SingleCellDensity2D*>(),
                        {"ResetGrid", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cellsize, origin);
}
inline ::GlobalNamespace::SingleCellDensity2D* GlobalNamespace::SingleCellDensity2D::New_ctor(float_t  cellsize, ::UnityEngine::Vector2  origin)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SingleCellDensity2D*>(cellsize, origin));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SingleCellDensity2D::SingleCellDensity2D()   {
}
