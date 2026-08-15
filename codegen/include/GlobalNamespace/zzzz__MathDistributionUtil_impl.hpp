#pragma once
// IWYU pragma private; include "GlobalNamespace/MathDistributionUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MathDistributionUtil_def.hpp"
#include "GlobalNamespace/zzzz__MathDistributionUtil_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil_Seed._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MathDistributionUtil_Seed::*)(uint32_t, uint32_t)>(&::GlobalNamespace::MathDistributionUtil_Seed::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a47e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil_Seed>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MathDistributionUtil_Seed::_ctor(uint32_t  u, uint32_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil_Seed>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, u, v);
}
// Ctor Parameters [CppParam { name: "U", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "V", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MathDistributionUtil_Seed::MathDistributionUtil_Seed(uint32_t  U, uint32_t  V) noexcept  {
this->U = U;
this->V = V;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MathDistributionUtil_Seed::MathDistributionUtil_Seed()   {
}
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MathDistributionUtil::*)()>(&::GlobalNamespace::MathDistributionUtil::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a0290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MathDistributionUtil::*)(uint32_t)>(&::GlobalNamespace::MathDistributionUtil::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MathDistributionUtil::*)(uint32_t, uint32_t)>(&::GlobalNamespace::MathDistributionUtil::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a0270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.SetSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MathDistributionUtil::*)(uint32_t, uint32_t)>(&::GlobalNamespace::MathDistributionUtil::SetSeed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a0270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"SetSeed", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.SetSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MathDistributionUtil::*)(uint32_t)>(&::GlobalNamespace::MathDistributionUtil::SetSeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"SetSeed", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.SetSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MathDistributionUtil::*)(::GlobalNamespace::MathDistributionUtil_Seed)>(&::GlobalNamespace::MathDistributionUtil::SetSeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a0260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"SetSeed", {}, {::i2c::type_of<::GlobalNamespace::MathDistributionUtil_Seed>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.SetSeedFromSystemTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MathDistributionUtil::*)()>(&::GlobalNamespace::MathDistributionUtil::SetSeedFromSystemTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804a0200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"SetSeedFromSystemTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.GetUniform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::MathDistributionUtil::*)()>(&::GlobalNamespace::MathDistributionUtil::GetUniform)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804a0090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetUniform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.GetUniform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::MathDistributionUtil::*)(::by_ref<::GlobalNamespace::MathDistributionUtil_Seed>)>(&::GlobalNamespace::MathDistributionUtil::GetUniform)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804a0030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetUniform", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MathDistributionUtil_Seed>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.GetUint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::MathDistributionUtil::*)()>(&::GlobalNamespace::MathDistributionUtil::GetUint)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804a0000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetUint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.GetNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::MathDistributionUtil::*)()>(&::GlobalNamespace::MathDistributionUtil::GetNormal)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18049fe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetNormal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.GetNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::MathDistributionUtil::*)(double_t, double_t)>(&::GlobalNamespace::MathDistributionUtil::GetNormal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18049fdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetNormal", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.GetExponential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::MathDistributionUtil::*)()>(&::GlobalNamespace::MathDistributionUtil::GetExponential)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18049f850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetExponential", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.GetExponential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::MathDistributionUtil::*)(double_t)>(&::GlobalNamespace::MathDistributionUtil::GetExponential)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18049f8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetExponential", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.GetGamma
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::MathDistributionUtil::*)(double_t, double_t)>(&::GlobalNamespace::MathDistributionUtil::GetGamma)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18049f980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetGamma", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.GetChiSquare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::MathDistributionUtil::*)(double_t)>(&::GlobalNamespace::MathDistributionUtil::GetChiSquare)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18049f830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetChiSquare", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.GetInverseGamma
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::MathDistributionUtil::*)(double_t, double_t)>(&::GlobalNamespace::MathDistributionUtil::GetInverseGamma)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18049fc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetInverseGamma", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.GetWeibull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::MathDistributionUtil::*)(double_t, double_t)>(&::GlobalNamespace::MathDistributionUtil::GetWeibull)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804a00e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetWeibull", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.GetCauchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::MathDistributionUtil::*)(double_t, double_t)>(&::GlobalNamespace::MathDistributionUtil::GetCauchy)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18049f750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetCauchy", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.GetStudentT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::MathDistributionUtil::*)(double_t)>(&::GlobalNamespace::MathDistributionUtil::GetStudentT)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18049ff40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetStudentT", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.GetLaplace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::MathDistributionUtil::*)(double_t, double_t)>(&::GlobalNamespace::MathDistributionUtil::GetLaplace)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18049fc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetLaplace", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.GetLogNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::MathDistributionUtil::*)(double_t, double_t)>(&::GlobalNamespace::MathDistributionUtil::GetLogNormal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18049fd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetLogNormal", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathDistributionUtil.GetBeta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::MathDistributionUtil::*)(double_t, double_t)>(&::GlobalNamespace::MathDistributionUtil::GetBeta)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18049f670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetBeta", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& GlobalNamespace::MathDistributionUtil::__cordl_internal_get_m_w()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_w;
}
constexpr uint32_t const& GlobalNamespace::MathDistributionUtil::__cordl_internal_get_m_w() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_w;
}
constexpr void GlobalNamespace::MathDistributionUtil::__cordl_internal_set_m_w(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_w = value;
}
constexpr uint32_t& GlobalNamespace::MathDistributionUtil::__cordl_internal_get_m_z()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_z;
}
constexpr uint32_t const& GlobalNamespace::MathDistributionUtil::__cordl_internal_get_m_z() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_z;
}
constexpr void GlobalNamespace::MathDistributionUtil::__cordl_internal_set_m_z(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_z = value;
}
inline void GlobalNamespace::MathDistributionUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MathDistributionUtil::_ctor(uint32_t  u)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, u);
}
inline void GlobalNamespace::MathDistributionUtil::_ctor(uint32_t  u, uint32_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, u, v);
}
inline void GlobalNamespace::MathDistributionUtil::SetSeed(uint32_t  u, uint32_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"SetSeed", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, u, v);
}
inline void GlobalNamespace::MathDistributionUtil::SetSeed(uint32_t  u)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"SetSeed", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, u);
}
inline void GlobalNamespace::MathDistributionUtil::SetSeed(::GlobalNamespace::MathDistributionUtil_Seed  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"SetSeed", {}, {::i2c::type_of<::GlobalNamespace::MathDistributionUtil_Seed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline void GlobalNamespace::MathDistributionUtil::SetSeedFromSystemTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"SetSeedFromSystemTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline double_t GlobalNamespace::MathDistributionUtil::GetUniform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetUniform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t GlobalNamespace::MathDistributionUtil::GetUniform(::by_ref<::GlobalNamespace::MathDistributionUtil_Seed>  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetUniform", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MathDistributionUtil_Seed>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, seed);
}
inline uint32_t GlobalNamespace::MathDistributionUtil::GetUint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetUint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline double_t GlobalNamespace::MathDistributionUtil::GetNormal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetNormal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t GlobalNamespace::MathDistributionUtil::GetNormal(double_t  mean, double_t  standardDeviation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetNormal", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, mean, standardDeviation);
}
inline double_t GlobalNamespace::MathDistributionUtil::GetExponential()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetExponential", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t GlobalNamespace::MathDistributionUtil::GetExponential(double_t  mean)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetExponential", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, mean);
}
inline double_t GlobalNamespace::MathDistributionUtil::GetGamma(double_t  shape, double_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetGamma", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, shape, scale);
}
inline double_t GlobalNamespace::MathDistributionUtil::GetChiSquare(double_t  degreesOfFreedom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetChiSquare", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, degreesOfFreedom);
}
inline double_t GlobalNamespace::MathDistributionUtil::GetInverseGamma(double_t  shape, double_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetInverseGamma", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, shape, scale);
}
inline double_t GlobalNamespace::MathDistributionUtil::GetWeibull(double_t  shape, double_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetWeibull", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, shape, scale);
}
inline double_t GlobalNamespace::MathDistributionUtil::GetCauchy(double_t  median, double_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetCauchy", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, median, scale);
}
inline double_t GlobalNamespace::MathDistributionUtil::GetStudentT(double_t  degreesOfFreedom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetStudentT", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, degreesOfFreedom);
}
inline double_t GlobalNamespace::MathDistributionUtil::GetLaplace(double_t  mean, double_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetLaplace", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, mean, scale);
}
inline double_t GlobalNamespace::MathDistributionUtil::GetLogNormal(double_t  mu, double_t  sigma)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetLogNormal", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, mu, sigma);
}
inline double_t GlobalNamespace::MathDistributionUtil::GetBeta(double_t  a, double_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathDistributionUtil*>(),
                        {"GetBeta", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, a, b);
}
inline ::GlobalNamespace::MathDistributionUtil* GlobalNamespace::MathDistributionUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MathDistributionUtil*>());
}
inline ::GlobalNamespace::MathDistributionUtil* GlobalNamespace::MathDistributionUtil::New_ctor(uint32_t  u)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MathDistributionUtil*>(u));
}
inline ::GlobalNamespace::MathDistributionUtil* GlobalNamespace::MathDistributionUtil::New_ctor(uint32_t  u, uint32_t  v)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MathDistributionUtil*>(u, v));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MathDistributionUtil::MathDistributionUtil()   {
}
